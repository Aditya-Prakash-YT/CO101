// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define WORD_LIMIT 4096

int wordLength(char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
} 

void main () {

    char text1[WORD_LIMIT], text2[WORD_LIMIT];

    printf("Enter the first string : ");
    scanf("%s", text1);

    printf("Enter the second string : ");
    scanf("%s", text2);


}