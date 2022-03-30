#include<stdio.h>
#include <string.h>

int main(){

//strlen    
    char *st = "Amana";
    int a = strlen(st);
    printf("The length of string st is %d\n", a);

//strcpy
    char *st1 = "This";
    char st2[45];
    strcpy(st2, st1);
    printf("Now the st2 is %s\n", st2);

//strcat
    char st11[45] = "Hello";
    char *st2 = "Amana";
    strcat(st11, st2);
    printf("Now the st1 is %s", st11);
    return 0;
}