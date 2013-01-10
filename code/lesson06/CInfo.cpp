#include "CInfo.h"

#include "stdio.h"
#include "iostream.h"
#include "string.h"

	void Info::input()
	{
		cout << "告诉我所以信息" ;
		cin >> name >> id >> height ;	
	}

	void Info::input(char str[])
	{
		cout << "只要告诉我学号、身高信息" ;
		strcpy(name, str);
		cin >> id >> height ;	
	}

	void Info::input(int i)
	{
		cout << "只要告诉我姓名、身高信息" ;
		id = i;
		cin >> name >> height ;	
	}

	void Info::output()
	{
		cout << name << endl 
		<< id  << endl 
		<< height << endl;
	}