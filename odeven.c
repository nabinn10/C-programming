//odd lai odd array even lai even array ma rakhni
#include<stdio.h>
int main()
{
	int i,j,n,arr[100],odd[100],even[100],a=0,b=0;
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
			even[a++]=arr[i];
		}
		else
		{
		odd[b++]=arr[i];
	}
	}
	printf("even:");
	for(i=0;i<a;i++){
	
	printf("%d",even[i]);
	}
	printf("\n");
	printf("odd:");
	}
