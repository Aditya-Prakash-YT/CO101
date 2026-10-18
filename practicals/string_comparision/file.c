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

int main () {

    char text1[WORD_LIMIT], text2[WORD_LIMIT];

    printf("Enter the first string (word limit : %d) : ", WORD_LIMIT);
    scanf("%s", text1);

    printf("Enter the second string (word limit : %d) : ", WORD_LIMIT);
    scanf("%s", text2);

    int len1 = wordLength(text1), len2 = wordLength(text2);

    if (len1 == len2) {
        int i = 0;

        while (i < len1) {
            if (text1[i] == text2[i]) {
                i ++;
                continue;
            } else {
                printf("The given strings are different. \n");
                return 0;
            }
        }
        printf("The given strings are same. \n");
    } else {
        printf("The given strings are different. \n");
    }
    
    return 0;
}