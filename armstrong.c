#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,rem,rev,temp;
	printf(" enter a num:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev+(rem*rem*rem);
		n=n/10;	
	}
	if ( temp==rev)
	{ printf(" armstrong");
	}
	else
	printf(" not");
	
}
