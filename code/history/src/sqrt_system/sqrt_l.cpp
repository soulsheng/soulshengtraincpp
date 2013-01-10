// sqrt_my.cpp : 定义控制台应用程序的入口点。
//
 
#include "stdafx.h"
#include <cmath>								// difference 1：被调用功能（系统）（函数）所在的头文件

int _tmain(int argc, _TCHAR* argv[])
{
	double	dValue = 0.0f;

	printf("Project sqrtl: print q to quit!\n");

	do 
	{
		scanf("%lf", &dValue);

		printf("sqrtl(%g) = %g\n", dValue, sqrtl(dValue) );// difference 2：通过（系统）（函数）调用开方功能

	} while ( 'q' != _getch() );

	return 0;
}

