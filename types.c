#include <stdio.h>
#include <limits.h>

int main () {
    /* Integer types */
    unsigned char a;
    signed char b;
    unsigned int c;
    signed int d;
    unsigned short int e;
    signed short int f;
    unsigned long int g;
    signed long int h;

    /* Floating-point types */
    float i;
    double j;
    //long double k;

    /* Suffixes
    5.0 - floating point (type double)
    f - indicates float type
    l - indicates long dobule type

    5 - integer
    l - indicates long integer
    u - indicates unsigned


    0x - hexadecimal, eventually transformed to int
    0 - octal, eventually transformed to int

    '\000' - an ASCII character, where 000 is some octal value
    '\xhh' - an ASCII character, where hh is some hexadecimal value
    */

    /* Enums */

    enum constants { PI = 3, E = 2, A = 1 };
    
    printf("%d", PI);

    return 0;
}
