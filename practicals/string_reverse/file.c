// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define WORD_LIMIT 16

int wordLength(char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
} 


void main () {
    char text[WORD_LIMIT], txet[WORD_LIMIT];

    printf("Enter the string you want to reverse (word limit : %d) : ", WORD_LIMIT);
    scanf("%s", text);

    int length = wordLength(text);

    for (int i = 0; i < length; i++) {
        txet[i] = text[length - i - 1];
    }

    txet[length] = '\0';

    // display the reversed string
    printf(">> Reversed string : ");
    for (int k = 0; k < length; k++) {
        printf("%c",txet[k]);
    }
    printf("\n");

}