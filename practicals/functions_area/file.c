// Aditya Prakash Singh (26/A14/005)

#include <stdio.h>

#define PI 3.14159


float circleArea (float radius) {
    return (PI * radius * radius);
}

float rectangleArea (float length, float breadth) {
    return (length * breadth);
}

float squareArea (float side) {
    return (side * side);
}

float triangleArea (float base, float height) {
    return (0.5 * base * height);
}



float circlePerimeter (float radius) {
    return (2 * PI * radius);
}

float rectanglePerimeter (float length, float breadth) {
    return (2 * (length + breadth));
}

float squarePerimeter (float side) {
    return (4 * side);
}

float trianglePerimeter (float a, float b, float c) {
    return (a + b + c);
}

void main () {
    float radius, length, breadth, side;
    float base, height, a, b, c;

    printf("Enter the radius of circle : ");
    scanf("%f", &radius);

    printf(">> Area of circle = %f\n", circleArea(radius));
    printf(">> Perimeter of circle = %f\n", circlePerimeter(radius));

    printf("\nEnter the length and breadth of rectangle : ");
    scanf("%f %f", &length, &breadth);

    printf(">> Area of rectangle = %f\n", rectangleArea(length, breadth));
    printf(">> Perimeter of rectangle = %f\n", rectanglePerimeter(length, breadth));

    printf("\nEnter the side of square : ");
    scanf("%f", &side);

    printf(">> Area of square = %f\n", squareArea(side));
    printf(">> Perimeter of square = %f\n", squarePerimeter(side));

    printf("\nEnter the base and height of triangle : ");
    scanf("%f %f", &base, &height);

    printf("Enter the three sides of triangle : ");
    scanf("%f %f %f", &a, &b, &c);

    printf(">> Area of triangle = %f\n", triangleArea(base, height));
    printf(">> Perimeter of triangle = %f\n", trianglePerimeter(a, b, c));
}