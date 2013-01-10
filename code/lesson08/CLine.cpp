#include "CLine.h"
#include "iostream.h"

	// 设置形状的属性/参数
void CLine::set()
{
	cin >> x1 >> y1 >> x2 >> y2;
}

	// 绘制几何形状
void CLine::draw()
{
	cout << "画一条直线" ;
}

	// 改变几何形状
void CLine::scale( float s )
{
	float x3, y3;
	x3 = x1  + (x2 - x1)  * s;
	y3 = y1  + (y2 - y1)  * s;

	x2 = x3;
	y2 = y3;
}