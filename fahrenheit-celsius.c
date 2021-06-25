#include <stdio.h>

int main () { 
    float celsius, fahr;
    int start, stop, step;

    start = 0;
    stop = 300;
    step = 20;

    fahr = start;
    
    printf("%10s\n", "Table");

    while (start <= stop) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f %6.1f\n", fahr, celsius);
           
        start += step;
        fahr = start;
    }

    return 0;
}
