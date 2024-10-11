#include<stdio.h>
int main()
{
	int n,rev=0,rem=0;
	printf(" enter a number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		rem=n%10;
		rev=rev+rem;
		n=n/10;
	}
	printf(" the sum of digit is %d",rev);
}

