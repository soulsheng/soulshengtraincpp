#include "CCircleBase.h"


class CBall: public CCircleBase
{
private:
	float r;

	float s;
	float v;

public:
	virtual void length();
	virtual void square();
	virtual void volume();

	virtual void output();

	CBall(float r);
};