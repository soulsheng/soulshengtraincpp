
#include "CCircleBase.h"


class CCircle : public CCircleBase
{
private:
	float r;
	
	float s;
	float l;

public:
	virtual void length();
	virtual void square();
	virtual void volume();

	virtual void output();

	CCircle(float r);
};