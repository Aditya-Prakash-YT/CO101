// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    if (number > 9999 && number < 100000) {
        int sum = 0;
        while (number != 0) {
            sum += number % 10;
            number = number/10;
        }
        printf("the sum of the given number is : %d \n", sum);
    } else {
        printf("Enter a valid number");
    }
    return 0;   
}


