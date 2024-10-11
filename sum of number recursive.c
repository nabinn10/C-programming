#include<stdio.h>
int sum (int[]);
int main()
{
	int i,n,arr[100],x;
	//printf("\nenter the value of n:");
	//scanf("%d",&n);
	printf("\n enter the elements: ");
	for (i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	x= sum(arr);
	printf("\nthe sum is %d",x);
}
int sum ( int arr[])
{
	int sums=0,i;
	for (i=0;i<10;i++)
	{
	sums=sum+arr[i];
}
	return sums;
}




