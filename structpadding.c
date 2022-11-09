//in padding we save the number of CPU cycles.
//in 32 Bites, one cycle or word is of 4 byte.
//in 64 Bites, one cycle or word is of 8 byte.
//the word's size varry as the greatest size data type.
#include<stdio.h>

struct abc{
    char a;
    int b;
    char c;
}var;

int main(){
    printf("%d",sizeof(var));
}