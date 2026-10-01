// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main ( ) {
    int x;
    double value = 1, e = 2.7182818285;

    printf("for e^x, enter the value of x : ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        value = value * e;
    }
    
    printf("e^%d = %lf \n",x,value);
    return 0;
}
