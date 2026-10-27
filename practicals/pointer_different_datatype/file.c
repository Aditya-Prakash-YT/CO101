// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main() { 
 
    int *ip;
    char *cp;
    float *fp;

    int i = 5;
    char ch = 'A';
    float f = 5.5;

    ip = &i;
    cp = &ch;
    fp = &f;

    printf("pointer of i = %p \n", ip);
    printf(" >> Derefrencing ip = %i \n", *ip);
    
    printf("pointer of ch = %p \n", cp);
    printf(" >> Derefrencing cp = %c \n", *cp);

    printf("pointer of f = %p \n", fp);
    printf(" >> Derefrencing fp = %f \n", *fp);

}