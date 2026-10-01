// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main() {

    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    int first = 0;
    int second = 1;

    printf("The Fibonacci sequence is : ");

    for (int i = 1; i <= number; i++) {
        printf("%d ", first);

        int next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}

