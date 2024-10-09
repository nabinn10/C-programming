#include<stdio.h>
int main()
{
	int i,arr[100],n,a[100],b[100],last[100];
	printf(" enter the value of n: ");
	scanf("%d",&n);
	printf(" enter the elements: ");
	for (i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for (i=1;i<=n;i++)
		{
			if (arr[i]%2==0)
			{
			
			a[i]=arr[i];
			//printf("%d \n",a);
		}
		else
			b[i]=arr[i];
			//printf("%d \n",b);
		}
		printf(" the final order is :");
		for (i=2;i<=n;i=i+2)
		{
		printf("%d",a[i]);
		}
		for (i=1;i<=n;i=i+2)
		{
		last[i]=b[i];
		printf("%d",b[i]);
	}
}
		

