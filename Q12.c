#include<stdio.h>
int main(){
    int a[]={1,2,3,4,45,6,3,5,45};
    int i,j,k;
    int s=sizeof(a)/sizeof(int);
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(a[i]==a[j]){
                for(k=j;k<s-1;k++){
                    a[k]=a[k+1];
                }
                s--;
                j--;
            }
        }
    }
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    return 0;
}