// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {
    FILE *file;
    long size;

    file = fopen("source.txt", "rb");

    if (file == NULL) {
        printf("Error opening file.\n");
    } else {
        fseek(file, 0, SEEK_END);

        size = ftell(file);

        printf("> Size of the file : %ld bytes\n", size);

        fclose(file);
    }
}