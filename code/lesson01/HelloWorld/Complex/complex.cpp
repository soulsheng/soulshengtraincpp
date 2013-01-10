#include "stdio.h"

	
	struct Complex
	{
		float a,b;	
	};

	void product(Complex c1, Complex c2, Complex &c3)
	{

		// 复数的乘法
		/*
	     a   +    ib
	*    c   +    id
	----------------
		a*c-b*d  + i(a*d+b*c) 
		*/
		c3.a = c1.a*c2.a - c1.b*c2.b;
		c3.b = c1.a*c2.b + c1.b*c2.a;	
		printf("%f + ", c3.a);
		printf("%fi \n", c3.b);
	}

	void minus(Complex c1, Complex c2, Complex &c3)
	{
		// 复数的减法
	/*
	  a + ib
	- c + id
	--------
	a-c + i(b-d) 
	*/
		c3.a = c1.a - c2.a;
		c3.b = c1.b - c2.b;

		printf("%f + ", c3.a);
		printf("%fi \n", c3.b);
	}

	void add(Complex c1, Complex c2, Complex &c3)
	{
		// 复数的加法
	/*
	  a + ib   
	+ c + id   
	--------
	a+c + i(b+d)  
	*/
	c3.a = c1.a + c2.a;
	c3.b = c1.b + c2.b;

	printf("%f + ", c3.a);
	printf("%fi \n", c3.b);
	}

int main()
{
	// 3个复数参与运算
	Complex c1, c2, c3;

	// 动态获取输入参数
	scanf("%f%f%f%f",&c1.a,&c1.b,&c2.a,&c2.b);

	// 复数相加
	add(c1,c3,c3);

	// 复数相减
	minus(c1, c2, c3);

	// 复数相乘
	product(c1, c2, c3);


	return 0;
}