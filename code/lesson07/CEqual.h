
class Fact
{
	float a,b,c;
};

class CEqual
{
private:
	Fact fact;
	float x1,x2;

public:
	void input();
	void calculate();
	void output();


	CEqual(float a1, float b1, float c1);

	CEqual(float a1);

protected:
	float deta();
};