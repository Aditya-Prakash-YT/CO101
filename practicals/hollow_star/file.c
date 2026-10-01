// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

int main () {

    int lines, val;
    printf("Enter the size : ");
    scanf("%d", &lines);

    if (lines <=1) {
        printf("< Error : Enter a Valid Number : ( n > 1 ) > \n");    
        return 0;
    } else {
        for (int y = 0; y <= lines*2 ; y++) {
            if (y < lines) {
                val = 2 * (lines - y) - 1;
            } else {
                val = 2 * (y - lines + 1) + 1;
            }
            for (int x = 0; x < val; x++) {
                printf(" ");
            }
            for (int z = 0; z < 2 * lines - val; z++) {
                if (z == 0 || z == 2 * lines - val - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}