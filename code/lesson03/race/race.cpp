#include "stdio.h"
#include <stdlib.h>
#include "time.h"

int main()
{
	char c1,c2;

	/* P, Y, O
	P > Y
	P < O
	Y > O
	*/
	printf("我出:");
	scanf("%c", &c1);

	srand( time(NULL) );
	int n = rand() % 3;
	if( n == 0 )
		c2 = 'P';
	else if( n == 1 )
		c2 = 'Y';
	else
		c2 = 'O';

	if( c1=='P' )
	{
		if( c2=='P' )
			printf("平了");
		else if( c2=='Y')
			printf("1赢了");
		else
			printf("2赢了");
	}
	else if( c1=='Y' )
	{
		if( c2=='P' )
			printf("2赢了");
		else if( c2=='Y')
			printf("平了");
		else
			printf("1赢了");
	}
	else
	{
		if( c2=='P' )
			printf("1赢了");
		else if( c2=='Y')
			printf("2赢了");
		else
			printf("平了");
	}



	return 0;
}