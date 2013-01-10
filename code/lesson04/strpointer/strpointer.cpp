/*----------------------------
看后写出如下程序，正确得到结果
----------------------------*/
#include <stdio.h>
#include <string.h>

int main()
{ 

char (*p)[10] ;
char a[10];

strcpy(a,"hello,world");

p=&a;

printf("p=%s\n "
"the second char in p is %c\n",*p,(*p)[1]);

return 0;

}