#include<Stdio.h>
int main()
{
	float R,r,A,a,area;
	printf("enter the radius of biger circle: ");
	scanf("%f",&R);
	printf("enter the radius of smaller circle: ");
	scanf("%f",&r);
	A=(22*R*R)/7;
	a=(22*r*r)/7;
	printf("the are of biger circle is %2f\n",A);
	printf("the are of smaller circle is %2f\n",a);
	printf("\nthe area of remaining part of the circle is %.2f",A-a);
	
	
}
