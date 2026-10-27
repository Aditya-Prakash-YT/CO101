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

void reverseTheWord(char string[], char gnirts[]) {
    int length = wordLength(string);

    for (int i = 0; i < length; i++) {
        gnirts[i] = string[length - i - 1];
    }

    gnirts[length] = '\0';
}


void main () {

    char text[WORD_LIMIT];
    char txet[WORD_LIMIT];

    printf("Enter the word (word limit : %d) : ", WORD_LIMIT);
    scanf("%s", text);

    reverseTheWord(text, txet);

    int same = 1;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != txet[i]) {
            same = 0;
            break;
        }
    }

    if (same) {
        printf("The given word is a palindrome.\n");
    } else {
        printf("The given word is not a palindrome.\n");
    }
    
}
