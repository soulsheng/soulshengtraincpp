// lesson02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Point
{
	float a,b;
};

void add(Point &p, Point l)
{
	p.a = p.a + l.a;
	p.b = p.b + l.b;
}

int main(int argc, char* argv[])
{
	Point p[3], l;

	p[0].a = 0;
	p[0].b = 1;

	p[1].a = -1;
	p[1].b = -1;

	p[2].a = 2;
	p[2].b = 0;

	l.a = 1;
	l.b = 0;

	/*

					   |
                       | 
					   p1->p1
					   |
                       | 			
			  ----------------p3->p3
					   |
				   p2->p2
                       | 
                       | 
    */

	// ∂•µ„∆Ω“∆
	for(int index = 0; index<3; index++)
	{
		// ∆Ω“∆
		add(p[index], l);

		printf("(%f,%f)\n", p[index].a, p[index].b);
	}


	return 0;
}
