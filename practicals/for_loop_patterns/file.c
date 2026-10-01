// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main() {

    int num1;

    printf("Enter number of lines : ");
    scanf("%d",&num1);


    for (int  y = 1; y < num1+1; y++) {
        for (int x = 1; x < y+1 ; x++) {
            printf("%d",x);
        }
        printf("\n");
    }

    int num2;

    printf("Enter number of lines : ");
    scanf("%d",&num2);


    for (int  y = 1; y < num2+1; y++) {
        for (int x = 1; x < y+1 ; x++) {
            printf("*");
        }
        printf("\n");
    }



    int lines;

    printf("Enter the size of triangle: ");
    scanf("%d", &lines);

    for (int y = 1; y <= lines + 1 ; y++) {
        int endSpacing = lines - y + 1;
        for (int i = 0; i < endSpacing; i++) {
            printf(" ");
        }
        for (int i = 0; i < lines - endSpacing; i++) {
            printf("| ");
        }
        for (int i = 0; i < endSpacing; i++) {
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}