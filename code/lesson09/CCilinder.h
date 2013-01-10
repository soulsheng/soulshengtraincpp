#include "CCircleBase.h"


class CCilinder: public CCircleBase
{
private:
	float r;
	float h;

	float s;
	float v;

public:
	virtual void length();
	virtual void square();
	virtual void volume();

	virtual void output();

	CCilinder(float r, float h);
};