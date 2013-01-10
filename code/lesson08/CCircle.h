#include "CShape.h"

class CCircle : public CShape
{
private:
	float x;
	float y;
	float r;

public:
	// 设置形状的属性/参数
	void set();

	// 绘制几何形状
	void draw();

	// 改变几何形状
	void scale( float s );

};