#include<stdio.h>
#include<math.h>
float quad(float,float,float);
int main()
{
	float a,b,c,d,e;
	printf(" enter the value of a ,b ,c: ");
	scanf("%f %f %f",&a,&b,&c);
	//d=quad(a,b,c);
	quad(a,b,c);
	//e=quad(a,b,c);
	//printf(" the two roots are %f and %f",d,e);
	//return 0;
	getch();
}
float quad(a,b,c)
{
	float X,f,g;
	X=(b*b-4*a*c);
	f=(-b+sqrt(X))/(2*a);
	//return f;
	g=(-b+sqrt(X))/(2*a);
	//return g;
	printf(" the two roots are %f and %f",f,g);
	
	
	
}
