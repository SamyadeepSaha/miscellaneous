#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *st;
    char *word;
    st = strdup("The quick brown fox jumped over the lazy dog");
    while((word = strsep(&st, " ")) != NULL) {
        printf("%s\n", word);
    }
    free(st);
    free(word);
}
