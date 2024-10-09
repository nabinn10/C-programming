#include<stdio.h>
int main ()
{
	int r,c,mat1[3][3],mat2[3][3],sum[3][3];
	printf("enter the elements of 1 matrix: ");
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
				scanf("%d",&mat1[r][c]);
		}
	}
	printf("enter the elements of 2 matrix: ");
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
				scanf("%d",&mat2[r][c]);
		}
	}
	for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			sum[r][c]=mat1[r][c]+mat2[r][c];
		}
	}
		printf(" the sum of matrix is : \n");
		for (r=0;r<3;r++)
	{
		for (c=0;c<3;c++)
		{
			printf("%d\t",sum[r][c]);
		}
		printf("\n");
	}
}
