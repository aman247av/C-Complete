#include<stdio.h>

int main(){
    // int a[] = {34,232,23};
    // printf("The value of a[0] is %d\n", a[0]);
    // printf("The value of a[1] is %d\n", a[1]);
    // printf("The value of a[2] is %d\n", a[2]);

    int ar[3][2]={5,7,9,2,6,1}; //this is also correct

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            printf("%d ",ar[i][j]);
        printf("\n");
    }

    float a[] = {3.4,2.32,2.3};
    printf("The value of a[0] is %f\n", a[0]);
    printf("The value of a[1] is %f\n", a[1]);
    printf("The value of a[2] is %f\n", a[2]);
    return 0;
}