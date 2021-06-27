#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 30
#define MAXLINELENGTH 50

int readlines(char *lines[]) {
    int c;
    char *p;
    char *p_base;
    int total_lines = 0;

    p = malloc(MAXLINELENGTH);
    p_base = p;

    while ((c = getchar()) != EOF) {
          if (c == '\n') {
              *p = '\0';
              *lines++ = p_base;
              total_lines++;

              p = p_base = malloc(MAXLINELENGTH);
          } else {
              *p++ = c;
          }
    }

    return total_lines;
}


void sort(char *lines[], int lines_count) {
    char *current_line;
    char *next_line;

    for (int i = 0; i < lines_count + 2; i++) {
        for (int j = 0; j < lines_count - 1; j++) {
            current_line = lines[j];
            next_line = lines[j + 1];

            if (strlen(current_line) > strlen(next_line)) {
                lines[j] = next_line;
                lines[j + 1] = current_line;
            }

        }
    }
}

int main() {
    char *lines[MAXLINES];
    int lines_count;

    lines_count = readlines(lines);

    printf("Not sorted:\n");

    for (int i = 0; i < lines_count; i++) {
        printf("Line number %d: %s\n", i, lines[i]);
    }

    sort(lines, lines_count);

    printf("Sorted:\n");

    for (int i = 0; i < lines_count; i++) {
        printf("Line number %d: %s\n", i, lines[i]);
    }

    return 0;
}
