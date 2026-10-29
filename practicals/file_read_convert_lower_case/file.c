// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {
    FILE *file1, *file2;
    int ch;

    file1 = fopen("source.txt", "r");

    if (file1 == NULL) {
        printf("Error opening source file.\n");
    } else {
        file2 = fopen("uppercase.txt", "w");

        if (file2 == NULL) {
            printf("Error creating destination file.\n");
            fclose(file1);
        } else {
            while ((ch = fgetc(file1)) != EOF) {
                if (ch >= 'a' && ch <= 'z') {
                    ch = ch - 32;
                }

                fputc(ch, file2);
            }

            fclose(file1);
            fclose(file2);

            printf("> File contents converted to uppercase successfully.\n");
        }
    }
}