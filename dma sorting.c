#include<Stdio.h>
#include<stdlib.h>
int main()
{
	int *arr[10],*temp,n;
	int i,j;
	printf(" enter the value of n: ");
	scanf("%d",&n);
	*arr=(int*)malloc(n * sizeof(int));
	printf(" enter the elements :");
	for (i=0;i<n; i++)
	{
		
		scanf("%d",arr[i]);
	}
	for ( i=0;i<n;i++)
	{
		for ( j=0;j<i;j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("the sorted numbers are : ");
		for ( i=0;i<n;i++)
		printf("%d",*arr[i]);
		
}
