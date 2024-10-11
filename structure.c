#include<stdio.h>

int main()

{

struct student

{

char name[20];

int roll;

float marks;

char remarks; };

struct student s[5];
int i;
for (i=1;i<=5;i++)
{
printf("Enter name:\t");

gets(s[i].name);

printf("\n Enter roll:\t");

scanf("%d", &s[i].roll);

printf("\n Enter marks:\t");

scanf("%f", &s[i].marks);

printf("\n Enter remarks (P for pass or F for fail):\t");

scanf("%c", &s[i].remarks);
}


printf("\n Name \t Roll \t Marks \t Remarks\n");

printf("\n.. ........\n");
for (i=1;i<=5;i++)
{

printf("\n%s\t%d\t%f\t%c", s[i].name, s[i].roll, s[i].marks, s[i].remarks);
}


return 0;

}


