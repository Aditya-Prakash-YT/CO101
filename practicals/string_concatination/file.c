// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define WORD_LIMIT 1024

int wordLength(char string[]) {
    int length = 0;
    while (string[length] != '\0') {
        length += 1;
    }
    return length;
} 


void main () {
    char text1[WORD_LIMIT], text2[WORD_LIMIT];

    printf("Enter the first string (chracter limit : %d) : ", WORD_LIMIT);
    scanf("%s", text1);
    
    printf("Enter the second string (chracter limit : %d) : ", WORD_LIMIT);
    scanf("%s", text2);

    int len1 = wordLength(text1), len2 = wordLength(text2);

    char text12 [(len1+len2)];

    // logic :

    for (int i = 0; i < len1; i++) {
        text12[i] = text1[i];
    }
    
    for (int j = 0; j < len1; j++) {
        text12[(len1 + j )] = text2[j];
    }

    // display the concatinated string
    printf(">> Concatinated string : ");
    for (int k = 0; k < len1 + len2; k++) {
        printf("%c",text12[k]);
    }
    printf("\n");

}