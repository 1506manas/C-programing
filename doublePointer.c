// C++ program to illustrate Pointer Arithmetic
// in C/C++
#include <stdio.h>

// Driver program
int main()
{
	// Declare an array
	int v[4] = {10, 100, 200, 1000};

	// Declare pointer variable
	int *ptr1=&v[0];
	*ptr1=20;
	int **ptr=&ptr1;
	printf("%d\n",**ptr);

	// Assign the address of v[0] to ptr
	*ptr = &v[1];
    printf("%d",**ptr);


}
