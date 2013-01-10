#include "stdio.h"

char upper(char c)
{
	char uc;
	
	int offset = 'c' - 'C';

	if( c>='a' && c<='z')
		uc = c - offset;
	else
		uc = c;

	return uc;
}

int main()
{
	//char ch;

	//scanf("%c", &ch);

	//ch = upper(ch);

	//printf("%c", ch);

	char name[10];
	name[0] = 'x';
	name[1] = 'u';
	name[2] = 'e';
	name[3] = ' ';
	name[4] = 'q';
	name[5] = 'u';
	name[6] = 'a';
	name[7] = 'n';
	name[8] = '\0';

	printf("%s\n", name);

	name[0] = upper(name[0]);

	for(int index=0; index<10; index++)
	{
		if( name[index] == ' ' )
			name[index+1] = upper( name[index+1] );
	}

	printf("%s\n", name);

	return 0;
}