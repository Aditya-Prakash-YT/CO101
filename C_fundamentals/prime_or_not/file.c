#include <stdio.h>

int main () {
    int number;

    printf("Enter a Number : ");
    scanf("%d", &number);

    if (number > 1) {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                printf("The given number is not a prime number. \n");

                return 0;
            }
        }
        printf("The given number is a prime number. \n");

    } else if (number == 1) {
        printf("1 is not a prime number. \n");
    } else {
        printf("Enter a valid Natural Number. \n");
    }

    return 0;
}

