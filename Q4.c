#include<stdio.h>
#include<string.h>
int main(){
    char st[];
    scanf("%")
    char c[256]={0},i;
    for(i=0;st[i]!='\0';i++){
        c[st[i]]++;
    }
    //int a=strlen(c);
    //printf("%d\n",c[st[1]]);
    for(i=0;st[i]!='\0';i++){ 
        if(c[st[i]]==1){
            printf("\n%c\n",st[i]);
            break;
        }
    }
    return 0;
}