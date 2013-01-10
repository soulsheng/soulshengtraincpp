#include "CCircle.h"
#include "iostream.h"

	// 设置形状的属性/参数
void CCircle::set()
{
	cin >> x >> y >> r;
}

	// 绘制几何形状
void CCircle::draw()
{
	cout << "画一个圆" ;
}

	// 改变几何形状
void CCircle::scale( float s )
{
	r = r * s;
}