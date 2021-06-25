#include <stdio.h>

int main () {
    int chars[26], c;

    for (int i = 0; i < 26; i++) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            chars[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            chars[c - 'A']++;
        }
    }
    
    for (int index; index < 26; index++) {
        printf("%c | ", index + 'a');
        
        for (int counter = 0; counter < chars[index]; counter++)
            putchar('=');
        
        putchar('\n');
    }

    return 0;
}
