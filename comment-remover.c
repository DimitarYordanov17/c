#include <stdio.h>
#include <stdbool.h>

int main () {
    int last_char, current_char;
    bool single_comment;
    bool multi_comment;

    last_char = 'a';
    while ((current_char = getchar()) != EOF) {
        if (current_char == '\n')
            single_comment = false;

        else if ((current_char == '/' && last_char == '*') && !(single_comment))
            multi_comment = false;

        if ((current_char == '/' && last_char == '/') && !(multi_comment)) {
            putchar('\b');
            single_comment = true;
        }

        else if ((current_char == '*' && last_char == '/') && !(single_comment)) {
            putchar('\b');
            multi_comment = true;
        }

        if (!((single_comment || multi_comment)) && current_char != '/') 
            putchar(current_char);
        
        last_char = current_char;
    }

    return 0;
}

