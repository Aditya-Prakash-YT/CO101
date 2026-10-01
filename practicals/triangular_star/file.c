// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main(void) {

    int lines;

    printf("Enter the size of triangle: ");
    scanf("%d", &lines);

    for (int y = 0; y < lines; y++) {

        for (int x = 0; x <= lines; x++) {
            if (x + y > lines) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("*");

        for (int x = 0; x <= lines; x++) {
            if (x < y) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");

    }
    
    return 0;
}