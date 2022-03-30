#include<stdio.h>

int main(){
    // char str[] = "Amana";
    char str[] = {'A', 'm', 'a', 'n', 'a', '\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }

    // char *ptr = "Amana bhai";
    // ptr="aman";
    char ptr1[] = "Amana bhai";
    printf("%s", ptr1);
    return 0;
}