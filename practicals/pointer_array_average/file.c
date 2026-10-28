// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

float *averageArrayPointers (int *array, int size) {
    int sum = 0;
    static float average;

    for (int i = 0; i < size; i++) {
        sum += *(array + i);
    }

    average = (float) sum / size;

    return &average;
}

void main () {
    int array[] = {21, 342, 67, 324, 4};
    int len = sizeof(array) / sizeof(array[0]);

    printf("The Given Array : [");
    for (int i = 0; i < len; i++) {
        printf("%d, ", array[i]);
    }
    printf("] \n");

    printf("> Average of all elements : %f\n", *averageArrayPointers(array, len));
}