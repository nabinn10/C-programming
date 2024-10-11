#include<stdio.h>
struct Person {
	char name[20];
	int age;
};
//int persons;
struct Person persons[5];
int main()
{
	int i=0;
	for (i=0;i<1;i++)
	{
	printf("Enter the name:\t");
	scanf("%s",persons[i].name);
	printf("Enter the age:\t");
	scanf("%d",&persons[i].age);
	}
	
		
	for (i=0;i<1;i++)
	{
	printf("\nThe name is %s\n",persons[i].name);
	printf("And the age is %d\n",persons[i].age);	
	}
	
}
