// FunSqrt.cpp : 定义控制台应用程序的入口点，调用自定义开方函数mySqrt
//
 
#include "stdafx.h"
#include "FunMySqrt.h"							// difference 1：被调用功能（自定义）（函数）所在的头文件

int _tmain(int argc, _TCHAR* argv[])
{
	double	dValue = 0.0f;

	printf("Project FunSqrt: print q to quit!\n");

	do 
	{
		scanf("%lf", &dValue);

		printf("mySqrt(%g) = %g\n", dValue, mySqrt(dValue) );// difference 2：通过（自定义）（函数）调用开方功能

	} while ( 'q' != _getch() );

	return 0;
}

