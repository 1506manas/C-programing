#include<stdio.h>
int main(){
    int c,a[]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the number you want:");
    scanf("%d",&c);
    int b=sizeof(a)/sizeof(int);
    int i,j;
    for(i=0;i<b;i++){
        for(j=0;j<b;j++){
            if(a[i]+a[j]==c){
                printf("(%d,%d)\n",a[i],a[j]);
                break;
            }
        }
    }
    return 0;
}