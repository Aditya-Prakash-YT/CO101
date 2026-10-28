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

    // Logic for insertion sort
    for (int i = 1; i < len; i++) {

        int key = array[i], j = i-1;

        while ((array[j] > key) && (j>=0)) {
            array[j+1] = array[j]; 
            j--;
        }

        array[j+1] = key;
    }

    printf("Sorted array (using insertion sort) : [ ");  // after swaping
    for (int x = 0; x < len; x++) {
        printf("%d, ", array[x]);
    }
    printf("]; \n");

}


