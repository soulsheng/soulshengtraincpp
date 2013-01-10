#include "stdio.h"
#include "math.h"

float deta(float a, float b, float c)
{
	float d = b*b - 4*a*c;
	return d;
}


void equal(float a, float b, float c, float& x1, float& x2)
{
	float d = deta(a,b,c);
	if( d>=0 )
	{
		x1 = (-b + sqrt( d ) )/(2*a);
		x2 = (-b - sqrt( d ) )/(2*a);
		printf("x1=%f, x2=%f\n", x1, x2);
	}
	else
	{
	/*
	 ax^2 + bx + c = 0;
	 x1 = (-b + sqrt(-deta)i )/(2a);
	 x2 = (-b - sqrt(-deta)i )/(2a);
	*/
		float real, image;
		real = -b/(2*a);
		image = sqrt(-d)/(2*a);

		printf("x1=%f + %fi\n", real, image);
		printf("x2=%f - %fi\n", real, image);
	}
	
}


int main()
{
	/*
	 ax^2 + bx + c = 0;
	 x1 = (-b + sqrt(deta) )/(2a);
	 x2 = (-b - sqrt(deta) )/(2a);
	*/
	float a,b,c,x1,x2;
	scanf("%f%f%f",&a,&b,&c);

	if( a!=0 )
	{
		equal(a,b,c, x1,x2);	
	}
	else
	{
		if( b!=0 )
		{
			x1 = -c/b ;
			printf("x1=%f\n", x1);
		}
		else 
		{
			printf("²ÎÊıÊäÈë´íÎó!\n");
		}
	}
	


	return 0;
}