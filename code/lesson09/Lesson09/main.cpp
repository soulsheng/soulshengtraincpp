#include "iostream.h"

#define N 5

int main()
{	
	int a[N];
	
	for(int i = 0;i<N;i++)
	{
		cin >> a[i] ;
	}
	

	int max;

	for(i = 0; i<N-1; i++)
	{
		max = i;

		for(int j=i+1; j<N;j++)
		{
			if( a[j]>a[max] )
				max = j;
		}
	
		if( max != i)
		{
			int temp;
			temp = a[i];
			a[i] = a[max];
			a[max] = temp;
		}
	}


	for(i = 0;i<N;i++)
	{
		cout << a[i] << endl ;
	}


	
	return 0;
}