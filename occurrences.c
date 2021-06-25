#include <stdio.h>

int main () {
    int c, white_space_chars, chars;
    int digits[10];

    white_space_chars = 0;
    chars = 0;


    /* Make sure the array is initialized to 0 */
    for (int i = 0; i < 10; i++) {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') // Digit
            digits[c - '0']++;
        else if (c == ' ' || c == '\t' || c == '\n')
            white_space_chars++;
        else
            chars++;
    }

    printf("digits =");

    for (int i = 0; i < 10; i++) {
        printf(" %d", digits[i]);
    }

    printf(", white space = %d, other = %d", white_space_chars, chars);

    return 0;
}
