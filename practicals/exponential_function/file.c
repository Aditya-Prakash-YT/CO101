// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {

    printf("This program finds the value of a^b \n");

    int a,b, value = 1;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        value = value * a;
    }
    
    printf("%d^%d = %d \n", a, b, value);

}