#include "CCircle.h"

#include "iostream.h"
#define PI	3.14

void CCircle::length()
{
	//cout << "圆 周长" << endl;
	l = 2 * PI * r;
}

void CCircle::square()
{
	//cout << "圆 面积" << endl;
	s = PI *  r * r;
}

void CCircle::volume()
{
	//cout << "圆 体积" << endl;
}

void CCircle::output()
{
	cout << "圆 输出结果" << endl;
	cout << "周长：" << l << endl;
	cout << "面积：" << s << endl;
}

CCircle::CCircle(float r)
{
	this->r = r;
}