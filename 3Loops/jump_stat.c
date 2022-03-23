#include<stdio.h>

int main(){
    int i = 0,skip=2;
    do{
        i++;
        if(i==skip){
            continue;
        }
        printf("The value of i is %d\n", i);
        if(i==4){
            break;
        }
        
    }while(i<10);

    return 0;
}