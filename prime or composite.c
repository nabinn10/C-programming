#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,rem,rev,count=0;
	printf(" enter a num:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{ 
		if (n%i==0)
		count++;
	}
	if ( count == 2)
	{
	printf(" it is prime");
	}
	else
	{
	printf(" it is not prime");
	}
}
