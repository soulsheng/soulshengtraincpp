#include "CBall.h"

#include "iostream.h"
#define PI	3.14

void CBall::length()
{
	//cout << "球体周长" << endl;
}

void CBall::square()
{
	//cout << "球体面积" << endl;
	s = 4 * PI * r * r;
}

void CBall::volume()
{
	//cout << "球体体积" << endl;
	v = PI * r * r * r * 4/3;
}

void CBall::output()
{
	cout << "球体输出结果" << endl;
	cout << "体积：" << v << endl;
	cout << "面积：" << s << endl;
}

CBall::CBall(float r)
{
	this->r = r;
}