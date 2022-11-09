#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("the value of a=%d and b=%d before swapping",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe value of a=%d and b=%d after swapping",a,b);
}