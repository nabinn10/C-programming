#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,arr[100],temp=0;
	printf(" enter the number to be entersn array: ");
	scanf("%d",&n);
	printf(" enter the elements of the array: ");
	for (i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=1;i<=n;i++){
	temp=temp+pow(arr[i],2);
}
printf(" the total sumis %d",temp);
	
}
