// Block_Conditional.cpp : 定义控制台应用程序的入口点，学习条件语句
//
 
#include "stdafx.h"
	

int	main()
{
	float	nParameterInput = 0;

	cout << "Project Lesson06_Block_Conditional !";

	cin >> nParameterInput;

	if (nParameterInput >=0 )
	{
		cout << "合法参数!";
	} 
	else
	{
		cout << "非法参数!";
	}


	return 0;
}

