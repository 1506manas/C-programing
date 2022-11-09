#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    int s=sizeof(a)/sizeof(int);
    for(int i=(s-1);i>=0;i--){
        printf("%d,",a[i]);
    }
    return 0;
}