#include<stdio.h>
int main()
{
	int i,j,n,arr[100],odd[100],even[100],temp;
	printf(" enter the number to be entered in array: ");
	scanf("%d",&n);
	printf(" enter the elements of the array: ");
	for (i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=1;i<=n;i++)
	{
		if (arr[i]%2==0)
		{
			even[i]=arr[i];
			printf("%d",even[i])
		}
		else
		odd[i]=arr[i];
		printf("%d",odd[i])
	}

		printf("even \n");
		for (i=1;i<=n;i++){
		
		printf("%d",even[i]);
		}for (i=1;i<=n;i++)
		{
		printf("\n odd");
		printf("%d",odd[i]);
}}
