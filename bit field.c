#include<stdio.h>
struct point{
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
    unsigned a1:1;
};
struct point2{
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
    unsigned a2:1;
};
int main{
    struct point p1;
    struct point2 p2;
    printf("%d",p1.a1);
}