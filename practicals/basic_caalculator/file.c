// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main () {

    float a,b,result;
    char operator;
    
    printf("Enter float 1: ");
    scanf("%f", &a);

    printf("Enter float 2: ");
    scanf("%f", &b);

    printf("Enter an operator ( +, -, *, /, | (mod) ): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = (float)a+b;
    } else if (operator == '-') {
        if (a>b) {
            result = (float)a-b;
        } else {
            result = (float)b-a;
        }
    } else if (operator == '*') {
        result = (float)a*b;
    } else if (operator == '/') {
        if (a !=0 && b != 0) {
            if (a>b) {
                result = (float)a/b;
            } else {
                result = (float)b/a;
            }
        } else {
            printf("Cannot devide by zero \n");
            return 0;
        } 
    } else {
        printf("Enter a valid operator \n");
        return 0;
    }
    
    printf("Answer : %f\n", result);
    return 0; 
}