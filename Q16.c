#include<stdio.h>
int main(){
    int a,count=0;
    printf("enter the number:");
    scanf("%d",&a);
    if(a!=2 && a%2==0){
        printf("\nthe number is composite");
        return 0;
    }
    else{
        for(int i=1;i<=a;i++){
            if(a%i==0){
                count++;
                printf("\nthe factors of the number is %d ",i);
            }
        }
        if(count==2){
            printf("\nthe number have only two factors so, it is prime");
        }
        else{
            printf("\nthe number is composite");
        }
    }
    return 0;
}