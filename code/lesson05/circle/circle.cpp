/*
设圆半径r，圆柱高h 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 
用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。
请编程序。 PI＝3.14
*/

//输入：两个浮点数，r和h

//输出：圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 保留两位小数，每个结果后换行

#include "stdio.h"
#define PI 3.14

int main()
{
	double r,h;
	double C1, Sa, Sb, Va, Vb;

	scanf("%lf%lf",&r,&h);

	// 处理
	C1 = 2 * PI * r;
	Sa = r * r * PI;

	/*
球的体积公式: V球=4/3 π r^3 
球的面积公式: S球=4π r^2 
  */
	Sb = 4 * PI * r * r;
	Va = 4 * PI * r * r * r/3;
	Vb = h * r * r * PI;


	printf("C1=%.2lf\n", C1);
	printf("Sa=%.2lf\n", Sa);
	printf("Sb=%.2lf\n", Sb);
	printf("Va=%.2lf\n", Va);
	printf("Vb=%.2lf\n", Vb);

	return 0;
}

