


#include "iostream.h"
#include "string.h"
#include "stdio.h"

#define N 3

bool compare(char a1[], char a2[])
{
	if( a1[0] > a2[0] )
		return true;
	else
		return false;
}


int main()
{	
	char a[N][4] = {"usa", "chn" , "rus"};
	
	//cin >> a[0] ;
	//cin >> a[1] ;
	//cin >> a[2] ;
	//scanf("%s%s%s", &a[0][0], &a[1][0], &a[2][0]);

	int max;

	for(int i = 0; i<N-1; i++)
	{
		max = i;

		for(int j=i+1; j<N;j++)
		{
			if( compare(a[j],a[max]) )
				max = j;
		}
	
		if( max != i)
		{
			char temp[3];
			strcpy(temp , a[i]);
			strcpy(a[i] , a[max]);
			strcpy(a[max] , temp);
		}
	}


	for(i = 0;i<N;i++)
	{
		cout << a[i] << endl ;
	}


	
	return 0;
}