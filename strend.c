#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) {

    for (char *start_pointer = s + strlen(s) - strlen(t); start_pointer <= s + strlen(s);) {
        if (*start_pointer != *t) 
            return 0;

        start_pointer++;
        t++;
    }
    return 1;
}

int main () {
    printf("%d", strend("zdrasti", "rasti"));
}
