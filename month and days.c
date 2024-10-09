#include<stdio.h>
int main()
{
	int days,temp;
	float mon,day;
	printf("enter the no of days:");
	scanf("%d",&days);
	temp=days;
	mon=days/30;
	day=temp-(mon*30);
	printf(" %.2f is month anf %2f are days",mon,day);
}
