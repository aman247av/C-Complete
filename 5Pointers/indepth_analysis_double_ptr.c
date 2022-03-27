#include<stdio.h>

int main(){
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr= &ptr;

    printf("The value of i is %d i\n", i);
    printf("The address of i is %d &i\n", &i);
    printf("The address of i is %d ptr\n", ptr);
    printf("The value of i is %d *ptr\n", *ptr);
    printf("The address of ptr is %d &ptr\n", &ptr);
    printf("The address of i stored in pointer ptr is %d *(&ptr)\n", *(&ptr));
    printf("The address of i is %d *ptr_ptr\n", *ptr_ptr);
    printf("The address of ptr is %d &ptr_ptr\n", &ptr_ptr);
    printf("The value of i using double pointer is %d **ptr_ptr\n", **ptr_ptr);

    return 0;
}