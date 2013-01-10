#include "stdio.h"
#include "fequal.h"

#define N 4

int main()
{
	float a,b,c,x1,x2;

	FILE* fp;
	fp = fopen("abc.txt","r");

	int i=0;
	while( i<N )
	{
		fscanf(fp, "%f%f%f", &a,&b,&c);
		i = i+1;
		equal(a,b,c, x1,x2);
	}

	return 0;
}