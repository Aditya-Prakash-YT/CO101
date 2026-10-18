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


char reverseTheWord (char string[]) {
    int length = wordLength(string);

    char gnirts[length];

    for (int i = 0; i < length; i++) {
        printf("%d",(length-i-1));

        gnirts[i] = string[length-i-1];
    }

    return gnirts;
}

void main () {
    
    char text[WORD_LIMIT];

    printf("Enter the word (word limit : %d) : ", WORD_LIMIT);
    scanf("%s", text);


    char txet[WORD_LIMIT] = reverseTheWord(text);



}