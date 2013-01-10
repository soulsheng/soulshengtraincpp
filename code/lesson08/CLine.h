#include "CShape.h"

class CLine : public CShape
{
private:
	float x1;
	float y1;
	float x2;
	float y2;

public:
	// 设置形状的属性/参数
	void set();

	// 绘制几何形状
	void draw();

	// 改变几何形状
	void scale( float s );

};