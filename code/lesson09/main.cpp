

#include "iostream.h"
#include "CCircle.h"
#include "CBall.h"
#include "CCilinder.h"

void calculate(CCircleBase* p)
{
	p->length();
	p->square();
	p->volume();
	p->output();
}

int main()
{

	float r, h;
	cin >> r >> h;

	CCircle cir(r);
	CBall	bal(r);
	CCilinder lin(r,h);

	calculate( &cir );

	calculate( &bal );

	calculate( &lin );


	return 0;
}