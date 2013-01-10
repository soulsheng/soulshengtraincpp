// HelloWorld_CPPStyle.cpp : 定义控制台应用程序的入口点，C++模式的HelloWorld程序
//
 
#include "stdafx.h"

int	main()
{
	int nValue = 100;
	cout << "Hello World!" << '\n' << nValue;

	struct  Vector3
	{
		float a,b,c;
	} ;

	struct  Vector3 pnt3D;
	pnt3D.a = 100;

	return 0;
}


//	Tip 3：cout向输出设备（一般就是屏幕啦）输出各种变量，功能同printf；
//	但它本质上不是函数，而是系统定义的一个全局变量；
//  这个变量类似于结构体struct变量，结构体变量支持运算符'.'，
//  而cout支持运算符'<<'；

//  "cin >> "用来从标准输入读入一个值，与C语言的scanf对应，用法如下：
//  int nInput; cin >> nInput ;