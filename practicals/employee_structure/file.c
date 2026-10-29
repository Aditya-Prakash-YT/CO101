// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    char department[50];
    float salary;
};

void main () {
    struct Employee employee;

    printf("Enter Employee ID : ");
    scanf("%d", &employee.id);

    printf("Enter Employee Name : ");
    scanf("%49s", employee.name);

    printf("Enter Employee Age : ");
    scanf("%d", &employee.age);

    printf("Enter Department : ");
    scanf("%49s", employee.department);

    printf("Enter Employee Salary : ");
    scanf("%f", &employee.salary);

    printf("\n Employee Details \n");

    printf("Employee ID   : %d\n", employee.id);
    printf("Employee Name : %s\n", employee.name);
    printf("Employee Age  : %d\n", employee.age);
    printf("Department    : %s\n", employee.department);
    printf("Employee Salary : %.2f\n", employee.salary);
}