// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define WORD_LIMIT 4096


int wordLength(char string[], int word_limit) {

    int length = 0;

    for (int i = 0; i < word_limit; i++) {
        if (string[i] == '\0')
            break;
        else
            length += 1;
    }

    return length;
} 


void main () {
    char string[WORD_LIMIT];

    printf("Enter a String : ");
    scanf("%s", string);

    int vowels = 0;

    for (int i = 0; i < wordLength(string, WORD_LIMIT); i++) {
        if ( string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U' ) 
            vowels += 1;
    }

    printf("\n> Number of vowels in the given string : %d\n",vowels);
}
