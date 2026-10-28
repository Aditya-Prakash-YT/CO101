// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int sumArrayPointers (int *array, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(array + i);
    }

    return sum;
}

void main () {
    int array[] = {10, 20, 30, 40, 50};
    int len = sizeof(array) / sizeof(array[0]);

    printf("The Given Array : [");
    for (int i = 0; i < len; i++) {
        printf("%d, ", array[i]);
    }
    printf("] \n");

    printf("> Sum of all elements : %d\n", sumArrayPointers(array, len));
}

