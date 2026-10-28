// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main() { 

    int array[] = {5,2,10,1,15,8};
    int len = sizeof(array) / sizeof(array[0]);

    printf("Given array : [ ");  // before swaping
    for (int x = 0; x < len; x++) {
        printf("%d, ", array[x]);
    }
    printf("]; \n");

    // Logic for bubble sort
    for (int i = 0; i < len-1; i++) {
        for (int j = 1; j < len-i; j++) {
            if (array[j-1] > array[j]) {

                // swaping here 
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted array (using bubble sort) : [ ");  // after swaping
    for (int x = 0; x < len; x++) {
        printf("%d, ", array[x]);
    }
    printf("]; \n");

}
