// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main() {

    int choice;
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1) {

        int number;
        printf("Enter a decimal number : ");
        scanf("%d", &number);

        int binary = 0;
        int place = 1;

        while (number > 0) {
            binary = binary + (number % 2) * place;
            number = number / 2;
            place = place * 10;
        }

        printf("The binary number is : %d\n", binary);

    } else if (choice == 2) {

        int number;
        printf("Enter a binary number : ");
        scanf("%d", &number);

        int decimal = 0;
        int power = 1;

        while (number > 0) {
            decimal = decimal + (number % 10) * power;
            power = power * 2;
            number = number / 10;
        }

        printf("The decimal number is : %d\n", decimal);

    } else {
        printf("Enter a valid choice");
    }

    return 0;
}

