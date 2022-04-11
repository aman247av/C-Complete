#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));

    
    int x = 5;
    int *p = &x;
    printf("Address of x = %d", p);
    int **q = &p;
    printf("\nAddress of p = %d", q);
    printf("\nValue of x = %d", x);
    printf("\nValue of x = %d", *p);
    printf("\nValue of x = %d", *(*q));
    printf("\nValue of x = %d", **q);

    return 0;
}