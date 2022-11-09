#include<stdio.h>

int main(){
    int count=0, i=0;
    char str[20]="your name is manas";
    while(str[i]!=0){
        i++;
        count++;
    }
    printf("string length is %d", count );
    return 0;
}