#include<stdio.h>
int main(){
    int a,sum,c=0,d=1;
    printf("enter a number:");
    scanf("%d",&a);
    printf("0,1,");
    for(int i=2;i<a;i++){
        sum=d+c;
        c=d;
        d=sum;
        printf("%d,",sum);
    }
    return 0;
}