
// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define N 10


void main () {
    int arr[N], maximum = 0;

    for (int i = 0; i < N; i++) {
        printf("arr[%d] : ", i);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < N; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    printf(">> Max : %d \n", maximum);
}