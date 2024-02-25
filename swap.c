/* Following code swap two variable */
#define SWAP(p,q)  p += q; q = p -q; p -= q; 
#include<stdio.h>
int main() {
    char x = 'a';
    char y = 'b';
    /*
    x += y;
    y = x - y;
    x -= y;
    */
    SWAP(x,y);
    printf("x: %c, y: %c\n", x, y);
    return 0;
}
