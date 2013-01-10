
#include "CEqual.h"
#include "iostream.h"
#include "math.h"

	void CEqual::input()
	{
		cout << "输入方程系数:" << endl;
		cin >> a >> b >> c;
	}
	void CEqual::calculate()
	{
		cout << "解方程:" << endl;
		
	float d = deta();
	if( d>=0 )
	{
		x1 = (-b + sqrt( d ) )/(2*a);
		x2 = (-b - sqrt( d ) )/(2*a);
	}
	else
	{
	/*
	 ax^2 + bx + c = 0;
	 x1 = (-b + sqrt(-deta)i )/(2a);
	 x2 = (-b - sqrt(-deta)i )/(2a);
	*/
		x1 = -b/(2*a);
		x2 = sqrt(-d)/(2*a);
	}

	}
	void CEqual::output()
	{
		cout << "输出方程解:" << endl;
		if( deta() >= 0 )
		{
			cout << x1 << endl;
			cout << x2 << endl;
		}
		else
		{
			cout << x1 << " + i*" << fabs(x2) << endl;
			cout << x1 << " - i*" << fabs(x2) << endl;
		}
	}


	float CEqual::deta()
{
	float d = b*b - 4*a*c;
	return d;
}

	CEqual::CEqual(float a1, float b1, float c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}

	CEqual::CEqual(float a1)
	{
		a = a1;
		cin >> b >> c;
	}