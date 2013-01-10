// Element_DataTypes.cpp : 定义控制台应用程序的入口点，学习C++的数据类型DataTypes
//
 
#include "stdafx.h"

#include "StructEquationSolution.h"


int	main()
{
	// double
	double partReal	=	3.1415926f;
	cout << "\t partReal = " << partReal << endl;		// 精度损失？

	// bool
	bool	bValid;
	bValid = true;
	cout << "\t bValid = " << bValid << endl;

	// struct
	StructEquationSolution	resultOut;

	resultOut.x1 = 0.707f;
	resultOut.x2 = -0.707f;

	cin >> resultOut.x1 >> resultOut.x2 ;

	cout << "\t resultOut.x1 = " << resultOut.x1 
		 << "\t resultOut.x2 = " << resultOut.x2 
		 << endl;

	return 0;
}

