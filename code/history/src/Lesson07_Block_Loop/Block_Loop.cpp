// Block_Loop.cpp : 定义控制台应用程序的入口点，学习循环语句
//
 
#include "stdafx.h"
						

int	main()
{
	float	nParameterInput = 0;

	cout << "Project Lesson07_Block_Loop: print q to quit!";

	int arrayInt[5];
	
	for (int i=0; i< 5; i++)
	{
		cin >> arrayInt[i];
	}

	int avarage = 0;
	...

	for (int i=0; i< 5; i++)
	{
		cout << arrayInt[i];
	}

	cout << avarage;
	return 0;
}

