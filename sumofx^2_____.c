#include<stdio.h>
int main()
{
	float sum=0;
	int x,n;
	int power=1,i,j;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			power*=x;
		}
		if (i%2==0)
		{
			sum-=power;
		}
		else
		sum+=power;
	}
	printf(" the sum up to %d terms is %.2f",n,sum);
	
	
}
