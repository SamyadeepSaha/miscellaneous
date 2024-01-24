#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define ARRLENGTH 10

int compare(const void *pa, const void *pb) {
    int a = *((int *)pa);
    int b = *((int *)pb);
    return a - b;
}

int main() {
    int values[ARRLENGTH];
    for(int i = 0; i < ARRLENGTH; i++) {
        values[i] = rand() % 100;
    }
    printf("Before sorting:");
    for(int i = 0; i < ARRLENGTH; i++) {
        printf(" %d", values[i]);
    }
    printf("\n");

    qsort(values, ARRLENGTH, sizeof(int), compare);
    printf("After sorting:");
    for(int i = 0; i < ARRLENGTH; i++) {
        printf(" %d", values[i]);
    }
    printf("\n");

    return 0;
}
