
#include "stdafx.h"
#include "CSqrt.h"

double CSqrt::sqrt( double dValue)
{
	double a,b,m;
	a = 0;
	b = dValue;
	m=(a+b)/2;
	while ((b-a)/2 >= 1.0e-6) {
		if ( equalTest(a, dValue) * equalTest(m, dValue) <= 0 ) {
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

double CSqrt::equalTest( double fResult, double dValue )
{
	return fResult*fResult - dValue;
}
