#include <stdio.h>

int main()
{
   int num=64;

   if((((num - 1)& num) == 0)){
      printf("\n%d is a power of 2\n", num);
      int position=log(num)/log(2);
      printf("power of 2 is %d", position);
    }
   else
      printf("\n%d is not a power of 2\n", num);

 return 0;
}