// CMySqrt.cpp : 定义控制台应用程序的入口点。
//
 
#include "stdafx.h"
#include "CSqrt.h"								// difference 1：被调用功能（类）所在的头文件

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double	dValue = 0.0f;
	
	cout << "Project CSqrt: print q to quit!\n" ;

	do 
	{
		cin >> dValue;

		cout << "CSqrt(" 
			<< dValue << ")= " 
			<< CSqrt::sqrt(dValue) 
			<<endl;
		//printf("CSqrt(%g) = %g\n", dValue, CSqrt::sqrt(dValue) );// difference 2：通过（类）调用开方功能

	} while ( 'q' != _getch() );

	return 0;
}

