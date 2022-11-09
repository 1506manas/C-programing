#include<stdio.h>
#include<math.h>


struct point{
    unsigned short int a1:1;
    unsigned short int a2:1;
    unsigned short int a3:1;
    unsigned short int a4:1;
    unsigned short int a5:1;
    unsigned short int a6:1;
    unsigned short int a7:1;
    unsigned short int a8:1;
    unsigned short int a9:1;
    unsigned short int a10:1;
    unsigned short int a11:1;
    unsigned short int a12:1;
    unsigned short int a13:1;
    unsigned short int a14:1;
    unsigned short int a15:1;
    unsigned short int a16:1;
};

  struct point p1;
    struct point p2;
    unsigned int Combine1 = 0;
    unsigned int Combine2 = 0;
    unsigned int Combine = 0;
    double Index  = 0;
    unsigned int* Pointer = NULL;
int main(){
  

    p2.a12 = 1;
    
    
    Pointer = (unsigned short int*)&p2;
    Combine2 = (unsigned int)*Pointer;
    
    Pointer = (unsigned short int*)&p1;
    Combine1 = (unsigned int)*Pointer;
    
    Combine = Combine2 | (Combine1 >> 4);
    printf("%u\n",Combine);
    
    
    Index = log(Combine)/log(2);
    printf("%f\n",Index);
    
    
    return 0;
}