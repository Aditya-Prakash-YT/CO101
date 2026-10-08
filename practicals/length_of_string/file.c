// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define WORD_LIMIT 4096

void main () {
    char string[WORD_LIMIT];

    printf("Enter a String : ");
    scanf("%s", string);

    int i = 0;

    while( string[i] != '\0'  ){
        i ++;
    }

    // for (int i = 0; i < WORD_LIMIT; i++) {

    //     if (string[i] == '\0')
    //         break;
    //     else
    //         length += 1;
    // }

    printf("\n> Length of the given string : %d\n", i);
}


// hello World