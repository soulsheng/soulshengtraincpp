
class Info
{
private:
	char name[10];
	int  id;
	float height;

public:	
	// 获取信息
	void input();
	void input(char str[]);
	void input(int i);

	// 发布信息
	void output();

	};
