// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main () {

    int number;
    printf("Enter a 5 digit number to reverse :");
    scanf("%d",&number);

    if (number > 9999 && number < 100000) {
        int reversedNumber = 0;
        while (number > 0) {
            reversedNumber = (reversedNumber*10) + number % 10;
            number = number/10;
        }
        printf("The reversed number is : %d\n", reversedNumber);

    } else {
        printf("Enter a valid number");
    }
    return 0;   
}


