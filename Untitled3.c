#include<stdio.h>
int main()
{
	float i,n;
	float sum1=0,sum2=0,sum=0;
	printf("enter the value of n: ");
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{
		sum+=(1/i);
	}
	printf("the sum is %.2f",sum);
}
