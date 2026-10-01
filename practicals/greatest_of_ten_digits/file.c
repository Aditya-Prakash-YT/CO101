// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main () {

    int number, other;

    printf("Enter Number : ");
    scanf("%d", &number);

    for (int i = 0; i < 9; i++) {

        printf("Enter Number : ");
        scanf("%d", &other);

        (number < other) ? (number = other) : (number = number) ;
        
    }
    
    printf("The Greatest number is: %d \n", number);

    return 0;
}

