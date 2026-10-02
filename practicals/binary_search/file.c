// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {

    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    printf("Given Array : [");

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d, ",array[i]);
    }

    printf("] \n");



    int high, low, mid ,target;
    bool found = false;
    
    printf("Enter Target value : ");
    scanf("%d", &target);
    
    while (low <= high && !found) {
        mid = low + (high - low) / 2;

        if (array[mid] == target) {
            printf("Target element %d was found in the array at index : \n", target, mid);
            found = true;
        }
        else if (array[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Target element %d was not found in the array\n", target);
    }

}