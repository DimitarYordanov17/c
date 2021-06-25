#include <stdio.h>

int main () { 
    float celsius, fahr;
    int start, stop, step;

    start = 0;
    stop = 300;
    step = 20;

    celsius = start;
    
    printf("%10s\n", "Table");

    while (start <= stop) {
        fahr = 9.0 / 5.0 * celsius + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
           
        start += step;
        celsius = start;
    }

    return 0;
}
