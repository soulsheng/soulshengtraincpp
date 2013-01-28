#include "stdio.h"

void shuru(int& yu, char& zuofa, int& cong)
{
	scanf("%d%c%d",&yu,&zuofa,&cong);
}

void zhizuo(int y, char zuofa, int cong, int& cai)
{
   	switch( zuofa )
	{
	case '+':
		cai = y + cong;
		break;

	case '-':
		cai = y - cong;
		break;

	case '*':
		cai = y * cong;
		break;

	case '/':
		cai = y / cong;
		break;

	default:
		break;
	} 
}

void shuchu(int& cai)
{
   printf("%d\n",cai);
}


int main()
{
    int		yu=0;
	int		cong=0;
	char	zuofa='+';

	int		cai=0;

	// 输入 
	shuru(yu, zuofa, cong);

	// 制作
	zhizuo(yu, zuofa, cong, cai);

	// 输出
	shuchu(cai);

	return 0;
}