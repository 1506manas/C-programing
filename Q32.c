#include<stdio.h>
int main(){
    int a;
    char b;
    printf("enter a character:");
    scanf("%c",&b);
    a=(int)b;
    if(a>=97 && a<=122){
        printf("\nthe character is a small letter");
    }
    else if(a>=65 && a<=90){
        printf("\nthe character is a capital letter");
    }
    else if(a>=48 && a<=57){
        printf("\nthe character is a number");
    }
    else{
        printf("\nthe character is a speacial symbols");
    }
    return 0;
}