#include<stdio.h>
int main(){
    int arr[]={0,12,32,21,453,23,455,22,500,1};
    int i,max1=arr[0],max2=0;
    int min1=arr[0],min2=32567;
    int a=sizeof(arr)/sizeof(int);
    for(i=0;i<a;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        if(arr[i]<min1){
            min1=arr[i];
        }
        if(arr[i]<min2 && arr[i]!=min1){
            min2=arr[i];
        }

    }
    printf("the largest number is:%d\n",max1);
    printf("the second largest number is:%d\n",max2);
    printf("the smallest number is:%d\n",min1);
    printf("the second smallest number is:%d",min2);
    return 0;

}