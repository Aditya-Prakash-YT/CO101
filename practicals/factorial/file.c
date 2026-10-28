// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int factorial (int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return (n * factorial(n - 1));
    }
}

void main () {
    int number, result;

    printf("Enter a number : ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not possible for negative numbers");
    } else {
        result = factorial(number);
        printf("%d! = %d\n", number, result);
    }

}
