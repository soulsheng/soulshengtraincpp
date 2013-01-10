

#include <iostream>					//  Tip 1：声明函数cout，C++标准库的输出函数，功能同C语言的printf
using namespace	std;				//	Tip 2：C++标准库的函数声明都属于std 的名字空间，

#include "UserFunctions.h"

void read(int &nVariableReference) 
{ 
	write(nVariableReference, "Before input: nVariable = ");
	cin >> nVariableReference;		
	write(nVariableReference, "After input: nVariable = ");
}									


void cook(int &nVariableReference)							
{ 									
	write(nVariableReference, "Before cook: nVariable = ");
	nVariableReference = nVariableReference << 10;				
	write(nVariableReference, "After cook: nVariable = ");
} 									

void write(int nValue, char* messagePrompt) 						
{			
	cout << messagePrompt ;
	cout << nValue << endl;
}		
