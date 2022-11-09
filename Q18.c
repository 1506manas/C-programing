#include<stdio.h>
int main(){
    int num;
    printf("enter any binary number:");
    scanf("%d",&num);
    int count=num, temp;
    while(count!=0){
        temp=count%10;
        if(temp==0 || temp==1){
            count=count/10;
        }
        else{
            printf("the number is not binary number");
            return 0;
        }
    }
    printf("the number is binary");
    return 0;
}