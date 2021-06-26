#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char text[]) {
    int result, length, significance;
    char current_char;

    result = 0;

    length = strlen(text);
    significance = pow(16, length - 1);
    
    for (int index = 0; index < length; index++) {
        current_char = text[index];

        if (current_char >= '0' && current_char <= '9')
            result += significance * (current_char - '0');

        else if (current_char >= 'a' && current_char <= 'F')
            result += significance * (10 + (current_char - 'a'));
        
        else if (current_char >= 'A' && current_char <= 'F')
            result += significance * (10 + (current_char - 'A'));
        
        printf("%d\n", result);
        significance /= 16;
    }
    
    return result;
}

int main () {
    char text[] = "E0F4";
    int result;

    result = htoi(text);

    printf("%d", result);

    return 0;
}
