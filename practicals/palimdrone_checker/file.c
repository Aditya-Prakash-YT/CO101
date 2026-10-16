// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int reverseANumber (int number) {
    int reversedNumber = 0;
    while (number > 0) {
        reversedNumber = (reversedNumber*10) + number % 10;
        number = number/10;
    }

    return reversedNumber;
}

void main() {

    int number;

    printf("Enter a Number to check : ");
    scanf("%d",&number);

    if (number == reverseANumber(number)) {
        printf("The number %d is a palimdrone \n", number);
    } else {
        printf("The number %d is not a palimdrone \n", number);
    }
    
}