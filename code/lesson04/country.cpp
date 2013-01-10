#include <stdio.h>
#include <string.h>

#define N 10

void swap(char n1[], char n2[], int count)
{
	char temp[30];
	strcpy(temp, n1);
	strcpy(n1, n2);
	strcpy(n2, temp);
}

void sortCountry( char n[][30] , int count )
{
	// 排序算法：	name[0][0]  .... name[0][1]
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if( n[i][0]	> n[j][0] )
			{
				swap( n[i], n[j] , 30);
			} 
		}
	}
}


int main()
{
	/*
	国家英文名字排序。
	输入：国家的英文名字，多个
	输出：国家的英文名字，按照字母顺序
	单词：		char name[30];
	多个单词：  char names[10][30];
	单词排序：	name[0][30]  ....  name[9][30]
	排序算法：	name[0][0]  .... name[0][1]
	*/
	char names[N][30];

	for(int i= 0; i< N; i++)
	{
		for(int j= 0;j<30;j++)
		{
			names[i][j] = '\0';
		}
	}

	for(i= 0; i< N; i++)
	{
		gets(names[i]);
	}

	// 排序
	sortCountry( names , N);

	printf("排序后：\n");
	for(i= 0; i< N; i++)
	{
		printf("%s\n", names[i]);
	}

	return 0;
}