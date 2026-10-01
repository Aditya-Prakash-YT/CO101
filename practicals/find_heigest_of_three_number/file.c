// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main () {

    float a,b,c;

    printf("Enter number 1: ");
    scanf("%f", &a);

    printf("Enter number 2: ");
    scanf("%f", &b);

    printf("Enter number 3: ");
    scanf("%f", &c);


    if (a == b || b == c || c == a ) {
        printf("the numbers must be different for comparision \n");

        return 0;
    }
    
    if (a > b) {
        if (a>c) {
            printf("number 1 is the greatest");
        } else {
            printf("number 3 is the greatest");
        }
    } else {
        if (b>c) {
            printf("number 2 is the greatest");
        } else {
            printf("number 3 is the greatest");
        }
    }

    printf("\n");

    return 0;
}

