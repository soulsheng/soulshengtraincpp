
#ifndef _CSHAPE
#define _CSHAPE

class CShape
{
public:
	// 设置形状的属性/参数
	virtual void set(){}

	// 绘制几何形状
	virtual void draw(){}

	// 改变几何形状
	virtual void scale( float s ){}

};

#endif