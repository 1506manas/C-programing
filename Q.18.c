#include<stdio.h>
int main(){
    int a,temp,r,reverse;
    printf("enter the number:");
    scanf("%d",&a);
    temp=a;
    while(a!=0){
        r=a%10;
        reverse=(reverse*10)+r;
        a=a/10;
    }
    printf("the reverse of the number %d is %d",temp,reverse);
    return 0;
}