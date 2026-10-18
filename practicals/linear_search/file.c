// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main ( ) {
    int array[] = {7,8,1,5,2}, target;

    printf("Given Array : [7,8,1,5,2] \n");
    printf("Enter the number to find : ");
    scanf("%d", &target);

    for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
        if (array[i] == target) {
            printf("Target value %d is present in the array at the index [%d] \n", target, i);
            return 0;    
        } else {
            continue;
        }
    }

    printf("Target value %d was not found in the array \n", target);
    return 0;
}

