#include<stdio.h>
int man()
{
	int y;
	printf(" Enter the year to be checked: ");
	scanf("%d",&y);
	
	if ( y % 4 == 0)
	{
	printf(" It is leap year");
	}	
	else if ( y % 400 == 0)
	{
	printf(" It is leap year");
	}
	if ( y % 100 == 0)
	{
	printf(" It is not leap year");
	}
		else
	printf(" it is not");
	}

