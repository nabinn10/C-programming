#include<stdio.h>
int main()
{
	int i,a,fact=1;
	printf(" enter a number: ");
	scanf("%d",&a);
	for (i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf(" The factorial is %d",fact);
}
