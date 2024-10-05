// check whether the number is divisible by 5 and 7 or nt
#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,a[50],n,j,arr[100];
	printf("enter numbers to be entered  in array: ");
	scanf("%d",&n);
	printf("enter %d numbers in array: ",n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",arr[i]);
	}
	for (i=1;i<=n;i++)
	{
		if (((arr[i]%5==0)&&(arr[i]%7))==0)
		{
	 printf("Number %d at index %d is divisible by both 5 and 7.\n", arr[i], i);
	}
    }
}
