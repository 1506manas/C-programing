#include<stdio.h>
int sum(int x){
    if(x!=0){
        int r=x%10;
        x=x/10;
        int s=sum(x)+r;
        return s;
    }
}
int main(){
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    int s=sum(a);
    printf("\nthe sum of digits of the number is %d",s);
    return 0;
}