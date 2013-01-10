/* SimpleCode_Read.cpp : 定义控制台应用程序的入口点。
*/


#include "UserFunctions.h"

int main()							
{		
	int nVariable;
	nVariable = 0;

	read(&nVariable);
	
	cook(&nVariable);
	
	write(&nVariable, "Result: nVariable = ");
	
	return 0;
}



	//   Question 1：#include用途？
	//   Question 2：#include <filename>与 #include "filename" 的区别？

	//   Exercise 1：

	//	 Homework 1：