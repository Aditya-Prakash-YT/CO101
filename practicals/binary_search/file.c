// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main() {

    int array[] = { 5, 10, 12, 18, 23, 30, 40 };
    int len = sizeof(array) / sizeof(array[0]);

    int up = len - 1, down = 0, mid, target;

    printf("The Given Array : [ 5, 10, 12, 18, 23, 30, 40 ] \n");
    printf("Enter Target value : ");
    scanf("%d", &target);

    while (down <= up) {

        mid = ((up - down) / 2) + down ;

        if (array[mid] == target) {
            printf( "Target element %d was found in the array at index : %d\n", target, mid );
            return 0;
        } else if (array[mid] < target) {
            down = mid + 1;
        } else {
            up = mid - 1;
        }
    }

    printf("Target element %d was not found in the array\n", target);

    return 0;
}

