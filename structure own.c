#include<stdio.h>
struct student
{
	char name[20];
	int age;
	char add[50];
};
int main()
{
	struct student s[10];
	int i,n,j;
	printf(" enter the value of n: ");
	scanf("%d",&n);
	printf(" enter the name, age and address of %d student:  \n",n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d %s",s[i].name,&s[i].age,&s[i].add);
	}
	
	for (i=0;i<n;i++);
	{
	printf(" \n the record of %d student are \n",(i));
	for (j=1;j<=i;j++)
	fflush(stdin);
	{
	printf(" \n the name of student is %s  \n",s[j].name);
	printf(" \n the age is %d  \n",s[j].age);
	printf(" \n the address is %s  \n",s[j].add);
	}
}
}
