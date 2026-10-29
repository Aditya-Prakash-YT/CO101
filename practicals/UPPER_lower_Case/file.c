// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define WORD_LIMIT 1024

int stringCompare (char string1[], char string2[]) {
    int i = 0;

    while (string1[i] != '\0' && string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return 0;
        }
        i++;
    }

    if (string1[i] == '\0' && string2[i] == '\0') {
        return 1;
    }

    return 0;
}

void main () {
    char lower_case[] = "abcdefghijklmnopqrstuvwxyz";
    char UPPER_CASE[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    char text[WORD_LIMIT], character[2], letter[2];

    printf("Enter a string: ");
    scanf("%99s", text);

    for (int i = 0; text[i] != '\0'; i++) {
        for (int j = 0; lower_case[j] != '\0'; j++) {
            character[0] = text[i];
            character[1] = '\0';

            letter[0] = lower_case[j];
            letter[1] = '\0';

            if (stringCompare(character, letter)) {
                text[i] = UPPER_CASE[j];
                break;
            }

            letter[0] = UPPER_CASE[j];
            letter[1] = '\0';

            if (stringCompare(character, letter)) {
                text[i] = lower_case[j];
                break;
            }
        }
    }

    printf("> Converted String : %s\n", text);
}