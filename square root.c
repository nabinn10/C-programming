#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double x;
	float rt1=0.00,rt2=0.00,temp;
	printf(" enter a coefficient of a, b, c :");
	scanf("%lf %lf %lf",&a,&b,&c);

		x=pow(b,2)-(4*a*c);
		temp=x;
		rt1=(-b+sqrt(x))/(2*a);
		rt2=(-b-sqrt(temp))/(2*a);
	
	printf(" the first roots is %.2lf; \n",rt1);
	printf(" the second roots is %.2lf ",rt2);
	
}
