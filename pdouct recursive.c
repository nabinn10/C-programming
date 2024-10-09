#include<stdio.h>
int prod(int, int);
int main()
{
	int a,b,x;
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	x=prod(a,b);
	printf("the prod id %d",x);
	return 0;
}
int prod(int a,int b)
{
	if (a==0 ) 
		return 0;
	else 
	return a+prod(b-1);
}
