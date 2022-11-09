#include <stdio.h>

struct Point {
int x;
int y;
};

int main()
{

struct Point p1 = {10, 20};
struct Point p2 = p1;

if(p2.x==p1.x && p2.y==p1.y){
printf("Copied successfully");
}

return 0;
}
