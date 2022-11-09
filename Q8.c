#include <stdio.h>
int getrepeatedNo(int a[], int n)
{
	int i, sum=0;
    int b=(n*(n-1))/2;
	for (i = 0; i < n; i++){
		sum=sum+a[i];
    }
	return (sum-b);
}
int main()
{
	int a[] = {1,2,4,3,5,6,6};
	int b=sizeof(a)/sizeof(int);
	int repeated = getrepeatedNo(a, b);
	printf("%d", repeated);
	return 0;
}
