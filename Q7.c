#include <stdio.h>
int getMissingNo(int a[], int n)
{
	int i, total;
	total = (n+1)*(n+2)/2;
	for (i = 0; i < n; i++)
		total -= a[i];
	return total;
}
int main()
{
	int a[] = { 1, 2, 4, 5, 6 };
	int b=sizeof(a)/sizeof(int);
	int miss = getMissingNo(a, b);
	printf("%d", miss);
	return 0;
}
