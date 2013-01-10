/*题目描述

编写一个程序，输入a、b、c三个值，输出其中最大值。
输入

一行数组，分别为a b c
输出

a b c其中最大的数
样例输入

10 20 30
样例输出

30
*/
#include "stdio.h"

int main()
{

int a,b,c;

int an;
scanf("%d%d%d",&a,&b,&c);
     an=a;
	 if(an<b)
     an=b;
	 if(an<c)
     an=c ;
printf ("%d",an);
return 0;
}
 
