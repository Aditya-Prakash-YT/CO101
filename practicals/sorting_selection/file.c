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
        for (int j = i+1; j < len; j++) {
            if (array[i] > array[j]) {

                // swaping here 
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted array (using selection sort) : [ ");  // after swaping
    for (int x = 0; x < len; x++) {
        printf("%d, ", array[x]);
    }
    printf("]; \n");

}