// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {
    int a = 10, b = 20;

    printf(">> Before Swapping : a = %d, b = %d\n", a, b);

    int *__a = &a, *__b = &b;

    int temp = *__a;
    *__a = *__b;
    *__b = temp;

    printf(">> After Swapping : a = %d, b = %d\n", a, b);
}