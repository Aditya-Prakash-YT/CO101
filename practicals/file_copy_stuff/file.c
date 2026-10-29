// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {
    FILE *file1, *file2;
    int ch;

    file1 = fopen("source.txt", "r");
    file2 = fopen("destination.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening file.\n");
    } else {
        while ((ch = fgetc(file1)) != EOF) {
            fputc(ch, file2);
        }

        printf("> File contents copied successfully.\n");

        fclose(file1);
        fclose(file2);
    }
}