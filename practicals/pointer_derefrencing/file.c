// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main() { 
    
    int i, *ip;
    int a[5] = {1,2,3,4,5};

    ip = &a[0];

    for (int i = 0; i < 5; i++) {
        printf(">> &a[%d] = %p \t a[%d] = %d \n", i, (i+ip), i, *(ip+i));
    }
    
}