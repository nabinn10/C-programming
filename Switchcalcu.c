#include<Stdio.h>
#include<math.h>
#include<windows.h>
#include<dos.h>
int main()
{
	char choice;
	int a,b;
	printf("Enter two numbers:\t");
	scanf("%d%d",&a,&b);
	printf("ENter you choice for calculation:");
	scanf("%s",&choice);
	
	switch(choice)
	{
		case '+':
			Sleep(4000);
			printf("Their sum is %d",(a+b));
			break;
			case '-':
				Sleep(4000);
			printf("Their difference is %d",(a-b));
			break;
			case '*':
				Sleep(4000);
			printf("Their product is %d",(a*b));
			break;
			case '/':
			if (b!=0)
		{Sleep(4000);
				printf("Their divison is %d",(a/b));
		}
			break;
			case '^':
				Sleep(4000);
			printf("Their power is (a^b): %llu and (b^a): %llu",pow(a,b),pow(b,a));
			break;
			default:
				printf("enter a valid operator");
			
			
	}
}
