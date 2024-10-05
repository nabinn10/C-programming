// sorting gareko rey
#include<stdio.h>
int main()
{
	int i,j,n,arr[100],temp;
	printf(" enter the number to be entersn array: ");
	scanf("%d",&n);
	printf(" enter the elements of the array: ");
	for (i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=i;j++)
			{
				if (arr[j]>arr[j+1])
				{
					temp=arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
		}
		printf("sorted numbers are: ");
		for (i=1;i<=n;i++)
		{
			printf("%d ",arr[i]);
		}
}
