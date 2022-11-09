#include<stdio.h>
#include<string.h>
int main(){
    char st[]="my name is manas";
    char c='m',i;
    int count=0;
    int d=strlen(st);
    for(i=0;i!=d;i++){ 
        if(st[i]==c){
            count++;
        }
    }
    printf("%c=%d",c,count);
    return 0;
}