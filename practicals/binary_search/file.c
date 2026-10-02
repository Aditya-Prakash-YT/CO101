// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main() {

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
    int len = sizeof(array) / sizeof(array[0]);

    printf("Given Array : [");

    for (int i = 0; i < len; i++) {
        printf("%d, ", array[i]);
    }

    printf("]\n");

    int high = len - 1, low = 0, mid, target;

    printf("Enter Target value : ");
    scanf("%d", &target);

    while (low <= high) {

        mid = low + (high - low) / 2;

        if (array[mid] == target) {
            printf( "Target element %d was found in the array at index : %d\n", target, mid );
            return 0;
        } else if (array[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Target element %d was not found in the array\n", target);

    return 0;
}

