#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define TYPE 0x4d42

static const char gc[8] = { ' ', ',', '-', 'o', 'a', '%', '#', '@' };

typedef struct {
    uint16_t type; // 2 bytes
    uint32_t fsize; // 4 bytes.
    uint32_t reserve; // 4 bytes.
    uint32_t offset; // 4 bytes.
    uint32_t hsize; // 4 bytes
    int32_t width; // 2 bytes
    int32_t height; // 2 bytes
    uint16_t planes; // 2 bytes
    uint16_t bitcount; // 2 bytes
    uint32_t compression; // 4 bytes
    uint32_t isize; // 4 bytes
    uint32_t xppm;
    uint32_t yppm;
    uint32_t colorused;
    uint32_t colorimp;
    //uint image_size;
} BMHEAD;

typedef struct {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t reserve;
} PIXEL;

    /*
typedef struct {
} DIBHEAD;
*/

int open_bmp_file(char file_name[]) {
    FILE *fp = fopen(file_name, "rb");
    BMHEAD head;
    PIXEL px;
    //DIBHEAD dib;
    uint32_t offset; // 4 bytes.
    int32_t width; // 2 bytes
    int32_t height; // 2 bytes
    
    //fread(&head, sizeof(BMHEAD), 1, fp);
    /*
    printf("File type: %x\n", head.type);
    printf("File size: %d\n", head.fsize);
    printf("File reserve: %d\n", head.reserve);
    printf("Image offset: %d\n", head.offset);
    printf("Image head size: %d\n", head.hsize);
    printf("Image width: %d\n", head.width);
    printf("Image height: %d\n", head.height);
    printf("Color planes: %d\n", head.planes);
    printf("Bits per pixel: %d\n", head.bitcount);
    printf("Image compression: %d\n", head.compression);
    printf("Image size: %d\n", head.isize);
    printf("Color used: %d\n", head.colorused);
    printf("Color important: %d\n", head.colorimp);
    */

    /*
    fread(&dib, sizeof(DIBHEAD), 1, fp);
    printf("Head size: %d\n", dib.head_size);
    printf("Width: %d\n", dib.width);
    printf("Height: %d\n", dib.height);
    printf("Colorplanes: %d\n", dib.colorplanes);
    printf("Bits per pixel: %d\n", dib.bitsperpixel);
    //printf("Compression: %d\n", dib.compression);
    //printf("Image size: %d\n", dib.image_size);
    */

    fseek(fp, 0x0a, SEEK_SET);
    fread(&offset, 4, 1, fp);
    fseek(fp, 0x12, SEEK_SET);
    fread(&width, 4, 1, fp);
    fseek(fp, 0x16, SEEK_SET);
    fread(&height, 4, 1, fp);
    /*
    printf("Image offset: %d\n", offset);
    printf("Image width: %d\n", width);
    printf("Image height: %d\n", height);
    */
    fseek(fp, offset, SEEK_SET);

    char **pxmap = (char**) malloc(height*sizeof(char*));
    for(int i = 0; i < height; i++)
        pxmap[i] = (char*) malloc(width*sizeof(char));

    fread(pxmap, head.height * head.width * 4, 1, fp);

    for(int y=0; y < height; y++) {
        for(int x=0;  x < width; x++) {
            //PIXEL px = pxmap[y][x];
            fread(&px, sizeof(px), 1, fp);
            int gs = (px.red + px.green + px.blue) / 3;
            int i = gs / 32;
            //printf("%d", i);
            //printf(" %c", gc[i]);
            pxmap[y][x] = gc[i];
        }
    }
    for(int y=height-1; y >= 0; y--) {
        for(int x=width-1;  x >= 0; x--) {
            printf("  %c", pxmap[y][x]);
        }
        printf("\n");
    }
    
    // free up pxmap
    for(int i = 0; i < height; i++)
        free(pxmap[i]);
    free(pxmap);

    fclose(fp);
}

int main() {
    open_bmp_file("messi.bmp");
}
