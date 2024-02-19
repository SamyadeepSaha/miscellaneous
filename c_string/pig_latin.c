
/*
 * Convert string to pig latin. The first consonant of
 * each word is moved to the end of the word and ay is
 * added, so first becomes irstfay. Words that start
 * with a vowel have hay added to the end instead (apple
 * becomes applehay).
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char str[] = "the quick brown fox jumped over the lazy dog";

int main() {
    char *sentence;
    char *word;
    // Print given string
    printf("%s\n", str);

    // Convert the string word by word
    // and prints it.
    sentence = strdup(str);
    if(sentence != NULL) {
        while((word = strsep(&sentence, " ")) != NULL) {
            //printf("%s ", word);
            // Word conversion
            char first = word[0];
            if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
                // Starts with vowel
                //strcat(word, "hay");
                printf("%shay ", word);
            } else {
                // Starts with consonant
                int count = 0;
                // Delete first alphabet
                while(word[count] != '\0') {
                    word[count] = word[count+1];
                    count ++;
                }
                /*
                strcat(word, &first);
                strcat(word, "ay");
                */
                printf("%s%cay ", word, first);
            }
        }
    }

    // Free up pointers
    free(sentence);
    free(word);
    printf("\n");
    return 0;
}
