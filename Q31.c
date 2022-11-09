#include<stdio.h>
int main(){
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if(c=='a'||c=='i'||c=='o'||c=='u'||c=='e'||c=='A'||c=='I'||c=='O'||c=='U'||c=='E'){
        printf("\nthe character is vowel");
    }
    else{
        printf("\nthe character is consonant");
    }
    return 0;
}