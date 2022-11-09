//Q6:-two strings are anagram or not
#include<stdio.h>
#define n 256
int main(){
    char str1[10]="silent";
    char str2[10]="lister";
    char count1[n]={0};
    char count2[n]={0};
    char i;
    int flag=0;
    if(strlen(str1)!=strlen(str2)){
        printf("\nit is not anagram");
        return 0;
    }
    for(i=0;str1[i] && str2[i];i++){
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    for(i=0;i<n;i++){
        if(count1[i]!=count2[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("\nit is anagram");
    }
    else{
        printf("\nit is not anagram");
    }
    return 0;
}