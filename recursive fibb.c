#include<stdio.h>
int fibb(int);
int main()
{
	int n,x,i;
	printf(" enter the value of n:");
	scanf("%d",&n);
	printf(" the fibonacci series up to %d terma are:",n);
		for (i=0;i<n;i++)
	{
	printf("%d ",fibb(i));
}
}
int fibb (int n)
{
	if (n==0)
	return 0;
			else if (n==1)
	return 1;
	else return (fibb(n-1)+fibb(n-2));
}
