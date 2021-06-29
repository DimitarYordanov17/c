/* Exercise 6-4. Write a program that prints the distinct words in its input sorted into decreasing order of frequency of
occurrence. Precede each word by its count. */

#include <stdio.h>
#include <string.h>

int get_word(char *word) {
    int c;
    
    while ((c = getchar()) != "\n") {
        if (c == EOF) {
            return -1;
        }

        *word++ = c;
    }

    return 0;
}

int main () {
    char *word;

    while (get_word(word) != -1) {
        // Do stuff
    }

    return 0;
}
