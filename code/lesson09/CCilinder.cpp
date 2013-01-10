#include "CCilinder.h"

#include "iostream.h"
#define PI	3.14

void CCilinder::length()
{
	//cout << "圆柱周长" << endl;
}

void CCilinder::square()
{
	//cout << "圆柱面积" << endl;
	s = 2 * PI * r * r + 2 * PI * r * h;
}

void CCilinder::volume()
{
	//cout << "圆柱体积" << endl;
	v = PI * r * r * h;
}


void CCilinder::output()
{
	cout << "圆柱输出结果" << endl;
	cout << "体积：" << v << endl;
	cout << "面积：" << s << endl;
}

CCilinder::CCilinder(float r, float h)
{
	this->r = r;
	this->h = h;
}