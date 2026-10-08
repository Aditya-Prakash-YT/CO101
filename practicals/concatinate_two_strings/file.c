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
    
    char string1[WORD_LIMIT];
    char string2[WORD_LIMIT];

    printf("Enter a String 1 : ");
    scanf("%s", string1);

    printf("Enter a String 2 : ");
    scanf("%s", string2);


    int l1 = wordLength(string1);
    int l2 = wordLength(string2);

    char concatinatedString[( l1 + l2 )];

    for (int i = 0; i < l1; i++) {
        concatinatedString[i] = string1[i];
    }

    for (int j = 0; j < l2; j++) {
        concatinatedString[j + l2] = string2[j];
    }

    printf("Conctinated String (string1 + string2) : ");
    for (int h = 0; h < wordLength(concatinatedString)-4; h++) {
        printf("%c", concatinatedString[h]);
    }
    
    printf("\n");

}
