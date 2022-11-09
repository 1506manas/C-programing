#include<stdio.h>
int main(){
    int a,r;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    int temp=a;
    while(a!=0){
        r=a%10;
        sum=sum+(r*r*r);
        a=a/10;
    }
    if(sum==temp){
        printf("the number %d is an Armstrong number",temp);
    }
    else{
        printf("the number %d is not an Armstrong number",temp);
    }
    return 0;
}