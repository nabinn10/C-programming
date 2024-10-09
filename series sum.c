//1+1/1.................
#include<stdio.h>
int main()
{
	int i,n;
	float sum=0;
	printf(" enter the value of n: ");
	scanf("%d",&n);
	for (i=1; i<=n ;i++);
	{
	sum=sum+(1/i);
}
	printf("the sum id %.2f",sum);
}
