// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main () {

    // get input
    float a, b ;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);


    // find sum and print result
    float sum = a + b;
    printf("Sum of %f and %f is: %f \n", a, b, sum);

    // find avarage and print result
    float average = sum / 2;
    printf("Average of %f and %f is: %f \n", a, b, average);   


    return 0;
}