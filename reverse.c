#include <stdio.h>

int get_length(char array[]);

void print_array(char array[]);

void reverse(char array[]);

int main () {
    char initial_array[10];

    /* Set array to values */
    for (int i = 0; i < 10; i++) {
        initial_array[i] = i + 'a';
    }
    
    printf("Initial array: \n");
    print_array(initial_array);

    reverse(initial_array);

    printf("\nReversed array: \n");
    print_array(initial_array);
    
    return 0;
}

void reverse(char array[]) {
    char temp_array[10];
    int length, inner_index;

    length = get_length(array);

    for (int i = 0; i < length; i++) {
        temp_array[i] = array[i];
    }

    inner_index = 0;
    for (int i = length - 1; i >= 0; i--) {
        array[inner_index] = temp_array[i];
        inner_index++;
    }
}

int get_length(char array[]) {
    int counter;
    counter = 0;

    while (array[counter] != '\0') {
        counter++;
    }

    return counter;
}

void print_array(char array[]) {
    int length;
    
    length = get_length(array);

    for (int index = 0; index < length; index++) {
        printf(" %c", array[index]);
    }   
}
