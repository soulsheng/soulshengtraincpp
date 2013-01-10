// SimpleCode_Read.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>					//  Tip 1：声明函数cout，C++标准库的输出函数，功能同C语言的printf

using namespace std;				//	Tip 2：C++标准库的函数声明都属于std 的名字空间，
									//  默认情况下使用cout时必须加上前缀std::(即std::cout)，
									//  using 指示符告诉编译器将要使用在名字空间std 中声明的函数，无须加前缀！
void read() 
{ 
	cout << "read()\n";				//	Tip 3：cout向输出设备（一般就是屏幕啦）输出各种变量，功能同printf；
}									//	但它本质上不是函数，而是系统定义的一个全局变量；
									//  这个变量类似于结构体struct变量，结构体变量支持运算符'.'，
									//  而cout支持运算符'<<'；
void sort()							
{ 									//  "cin >> "用来从标准输入读入一个值，与C语言的scanf对应，用法如下：
	cout << "sort()\n";				//  int nInput;
} 									//  cin >> nInput ;
void compact() 
{ 
	cout << "compact()\n";			//  Tip 4：C++中有两种注释符号：
}									//  第一种是注释对/* */，与C 语言中的一样，注释可以跨越多行；
void write() 						//  第二种是双斜线//，是C++ 新增的注释方式，它可用来注释一个单行。
{									//  重大区别：C注释对不能嵌套，即一个注释对不能出现在另外一个注释对之中，
	cout << "write()\n"; 			//            而C++双斜线//解决了这种嵌套注释的限制；
}									//  例如：
int main()							///*  这种/*注释*/不支持，无法编译通过。 */
{									//  这种//注释支持，不影响程序编译。
	read();
	sort();
	compact();
	write();

	return 0;}



	//   Question 1：#include用途？
	//   Question 2：#include <filename>与 #include "filename" 的区别？

	//   Exercise 1：

	//	 Homework 1：