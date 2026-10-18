// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main() { 
    
    int array[5] = {1,2,3,4,5};
    int *pointer[5];

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d \t",i, array[i]);

        // works on my device
        printf("&a[%d] = %p \n",i, &array[i]);

        pointer[i] = &array[i];
    }

}