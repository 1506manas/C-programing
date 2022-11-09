#include<stdio.h>
int main(){
    int a,r;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    int temp=a;
    while(a!=0){
        r=a%10;
        sum=(sum*10)+r;
        a=a/10;
    }
    if(sum==temp){
        printf("%d is a palindrome",temp);
    }
    else{
        printf("%d is not a palindrome",temp);
    }
    return 0;
}