#include "stdio.h"

void swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}


int main()
{
	int a,b;

	scanf("%d%d",&a,&b);

	printf("%d,%d\n", a,b);

	swap(a, b);

	printf("%d,%d\n", a,b);


	int *p = &b;

	*p = 1000;

	printf("%d,%d\n", a,b);


	return 0;
}