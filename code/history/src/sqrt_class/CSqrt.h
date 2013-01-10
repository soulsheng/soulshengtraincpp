
#pragma  once

class CSqrt
{
public:
	// 二分法 求 开方
	static double sqrt(double dValue);

protected:

private:
	static double equalTest(double fResult, double dValue);
};