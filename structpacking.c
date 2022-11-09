//in packing we save the memory.
//while saving memory we can't save cpu cycles.
#include<stdio.h>
#pragma pack(1)

struct abc{
    char a;
    int b;
    char c;
}var;

int main(){
    printf("%d",sizeof(var));
}