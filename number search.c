#include<stdio.h>
int main()
{
	int arr[10],i,num;
	printf(" entere the elemensts of aray: ");
	for (i=1;i<=10;i++){
		scanf("%d",&arr[i]);
	}
	printf(" eneter a number for search: ");
	scanf("%d",&num);
	for (i=1;i<=10;i++){
	if (num == arr[i])
	{
	printf("the number is found in %d position",i);
	else
	{
	
	printf("not found");
}}
}


}
