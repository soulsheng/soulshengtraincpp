#include "stdio.h"


int main()
{
	int month, day;

	scanf("%d", &month);

	if( month==4 || month == 6 || month == 9 || month ==11 )
	{
		day = 30;
	}
	else if( month==1 || month == 3 || month == 5 || month ==7  || month ==8 || month ==10 || month ==12)
	{
		day = 31;
	}
	else
	{
		day = 29;
	}

	switch(month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 2:
		day = 29;
		break;
	}



	printf("第%d月的天数是%d", month, day);

    return     0;
}