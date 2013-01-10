
#include "stdio.h"

#include "CCircle.h"
#include "CLine.h"

void update(CShape* p)
{
	p->scale(10);
	p->draw();
}

int main()
{
	CCircle c1;
	CLine l1;
/*
	c1.set();
	l1.set();

	c1.draw();
	l1.draw();
*/

	/*
	CShape* p;
	p = &c1;

	p->scale(10);
	p->draw();

	p = &l1;

	p->scale(10);
	p->draw();
*/
	update( &c1 );

	update( &l1 );


	return 0;
}
