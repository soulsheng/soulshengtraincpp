/*
要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．
例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。
请编一程序，用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，
’C’、’h’、’i’、’n’、’a’，经过运算，使c1、c2、c3、c4、c5分别变为
’G’、’l’、’m’、’r’、’e’，并输出。
  */
// China
// 输出 Glmre

#include "stdio.h"

int main()
{
	char word[5];
	scanf("%s", word);

	// 加密
	word[0] = word[0] + 4;
	word[1] = word[1] + 4;
	word[2] = word[2] + 4;
	word[3] = word[3] + 4;
	word[4] = word[4] + 4;



	printf("%s", word);

	return 0;
}