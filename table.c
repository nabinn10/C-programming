#include<stdio.h>
int main()
{
	int a,i;
	printf(" enter a number: ");
	scanf("%d",&a);
	printf(" table of %d is calculated as ",a);
	for (i=0;i<=10;i++)
	{
		printf(" %d X %d = %d \n",a,i,(a*i) );

	}
}
