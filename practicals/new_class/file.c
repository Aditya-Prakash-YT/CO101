#include <stdio.h>



void message (); // => return (type) functionName ();

int callsum (int a, int b, int c);

void main () {

    // int a = 5, b = 5;
    // int c, d;

    // c = a++ + ++b;
    // d = (a++) + (b++);
 
    // printf("%d \n %d",c,d);





    // int i = 2, j = 3, k, l;
    // float a, b;

    // k = i/j*j;
    // l =j/i*i;

    // a = i/j*j;
    // b = j/i*i;

    // printf('%d %d %f %f', k,l,a,b);


    // int a,b,c,d,e,f;

    // a = 5;
    // b = -a;
    // c = ~a;
    // d = !a;
    // e = sizeof(a); // 2^ 4 => 4 size of the datatype
    // f = (float) a; //

    // printf("%d %d %d %d %d %d",a,b,c,d,e,f);



    message();

    int a = 2, b = 4, c = 5;
    int sum = callsum(a,c,b);

    int *p = &a;

    printf("%d ,%d ,%d ,%d \n", sum, a,b,c);

    printf("Pointer : %p", p);

}





void message () {
    printf("\n Message function called here \n");
}


int callsum (int a, int b, int c) {
    int d = a+b+c;

    a = a + 2;

    printf("%d ,%d ,%d \n", a,b,c);

    return (d);
}