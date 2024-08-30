/* This program is example of how we can
 * write a c code to print hello world
 * without using stdio.h header file */
extern int printf (const char* format, ...);
int main() {
    int num = 3 + 5;
    printf("Hello world!");
    return num;
}
