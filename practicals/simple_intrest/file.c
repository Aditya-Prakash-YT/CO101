// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main (){

    // get input
    float principal, rate, time;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);


    // find simple interest and print
    float simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest: %f\n", simple_interest);


    // find final amount and print
    float final_amount = principal + simple_interest;
    printf("Final Amount: %f\n", final_amount);

    return 0;
}

