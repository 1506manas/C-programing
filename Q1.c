//Q1:-check the string is pellindrome or not
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="abaaba abaaba";
    char i;
    int s=strlen(str);
    int flag=0;
    for(i=0;i<s;i++){
        if(str[i]!=str[s-(i+1)]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("string is not pellindrome");
    }
    else{
        printf("string is pellindrome");
    }
}