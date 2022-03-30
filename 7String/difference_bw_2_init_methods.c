#include<stdio.h>

int main(){ 
    char *ptr = "Amana Bhai";
    // char ptr[] = "Amana Bhai"; //can update if pointer used
    ptr = "Shubham bhai";
    printf("%s", ptr);
    return 0;
}