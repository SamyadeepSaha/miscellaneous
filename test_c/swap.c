/* Following code swap two variable */
#define SWAP(p,q)  p += q; q = p -q; p -= q; 
void swap_func(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
#include<stdio.h>
int main() {
    char x = 'a';
    char y = 'b';
    int p = 3, q = 4;
    /*
    x += y;
    y = x - y;
    x -= y;
    */
    SWAP(x,y);
    printf("x: %c, y: %c\n", x, y);
    swap_func(&p, &q);
    printf("p: %d, q: %d\n", p, q);
    return 0;
}
