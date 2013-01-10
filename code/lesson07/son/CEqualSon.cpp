#include "CEqualSon.h"
#include "iostream.h"
#include "math.h"

void CEqualSon::calculate()
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
		x1 = (-b )/(2*a);
		x2 = sqrt( -d ) /(2*a);		
	}
	
}

void CEqualSon::output()
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