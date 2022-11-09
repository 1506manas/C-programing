#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={2,3,1,0,5};
    int i,a=sizeof(arr1)/sizeof(int);
    int j,b=sizeof(arr2)/sizeof(int);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(arr1[i]==arr2[j]){
                break;
            }
        }
        if(j==b){ 
            printf("%d\n",arr1[i]);
        }
    }
    return 0;
}