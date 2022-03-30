#include<stdio.h>

int main(){
    char s[34];
    printf("Enter your name: ");
    scanf("%s", s); //till first space
    printf("Your name is %s", s);

    char ss[34];
    printf("Enter your name: ");
    scanf("%[^\n]%*c",ss); 
    //gets(ss);
    puts(ss); 
    // printf("Your name is %s", ss);
    return 0;
}