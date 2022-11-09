#include<stdio.h>
int main(){
    int a=1,b=288;
    int c=a,d=b;
    while(b!=0){
        a++;
        b--;
    }
    printf("%d+%d=%d",c,d,a);
    return 0;
}