#include<stdio.h>
#include<string.h>
int main()
{
	int i,vow=0,con=0,total=0;
	char s[1000];
	printf(" enter the line of text: ");
	gets(s);
	for (i=1;i<=s[i];i++)
	{
		if (((s[i>=65])&&(s[i]<=90))||(s[i]>=97)&&(s[i]<=122))
		{
			if ((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u') || (s[i]=='A') || (s[i]=='E') || (s[i]=='I') || (s[i]=='O') || (s[i]=='U' )){
				vow++;
			}
				else
				
				{
		
				con++;
			}
			total=vow+con;
			
			
			}
		}
		printf(" the total vowels are %d",vow);	
			printf(" the total consonant are %d",con);	
			printf(" the total words are %d",total);	
}
