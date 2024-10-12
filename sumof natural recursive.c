#include<stdio.h>
int sum(int);
int main()
{
	int n,x;
	printf("enter the value of n:");
	scanf("%d",&n);
	x=sum(n);
	printf("the sum id %d",x);
	return 0;
}
int sum(int n)
{
	int sums;
	if (n==0)
	{
		return 0;
	}
	else 
	return n+sum(n-1) ;
}
