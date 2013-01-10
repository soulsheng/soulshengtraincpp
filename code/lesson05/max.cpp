#include "stdio.h"

int main()
{
	// 编写一个程序，输入a、b、c三个值，输出其中最大值。
	// 一行数组，分别为a b c
	// a b c其中最大的数
	int a,b,c;
	int m;
	scanf("%d%d%d",&a,&b,&c);

	m = a;
	if( m<b )
		m = b;
	if( m<c )
		m = c;

	printf("%d",m);

	return 0;
}