// FunMySqrt.c : 函数mySqrt的实现
//

#include "stdafx.h"
#include "FunMySqrt.h"

double mySqrt( double dValue)
{
	double a,b,m;
	a = 0;
	b = dValue;
	m=(a+b)/2;
	while ((b-a)/2 >= 1.0e-6) {
		if ( myEqualTest(a, dValue) * myEqualTest(m, dValue) <= 0 ) {
			b=m;
			m=(a+b)/2;
		}
		else  {
			a=m;
			m=(a+b)/2;
		}
	}

	return m;
}

double myEqualTest( double fResult, double dValue )
{
	return fResult*fResult - dValue;
}

