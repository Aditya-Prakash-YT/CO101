// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

void main () {
    FILE *file;
    char name[50];
    int age;
    float salary;

    printf("Enter Name : ");
    scanf("%49s", name);

    printf("Enter Age : ");
    scanf("%d", &age);

    printf("Enter Salary : ");
    scanf("%f", &salary);

    file = fopen("emp.txt", "w");

    if (file == NULL) {
        printf("Error creating the file.\n");
    } else {
        fprintf(file, "Name : %s\n", name);
        fprintf(file, "Age : %d\n", age);
        fprintf(file, "Salary : %f\n", salary);

        fclose(file);

        printf("> Employee information stored in emp.txt successfully.\n");
    }
}