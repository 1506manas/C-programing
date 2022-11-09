#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int i,result;
    printf("Enter a no.:");
    scanf("%d",&a);
    if(((a) & (a-1))==0){
        printf("the given number is the power of 2");
    }
    else{
        printf("the given number is not the power of 2");
    }
    
    return 0;
}