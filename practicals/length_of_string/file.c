// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {
    char string[] = "Hello World !";

    printf("Given String : ");

    int len = sizeof(string)/sizeof(string[0]);
    for (int i = 0; i < len; i++) {
        printf("%c", string[i]);
    }

    printf("\n> Length of the given string : %d\n",len);
    
}