#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,x;
	float sum1=0,sum2=0,sum=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the value of x: ");
	scanf("%d",&x);
	for (i=1;i<=n;i++)
	{
		if (i==2)
		
	{
	
		sum1=sum1+(-(pow(x,i)))/i;
	}
		else
		sum2=sum2+(pow(x,i))/i;
		
	}
	sum=sum1+sum2;
	printf("the total sum is %.2f",sum);
}
	
