#include<stdio.h>
int main ()
{
	int r,c,mat1[3][2],mat2[3][2],diff[3][2];
	printf("enter the elements of 1 matrix: ");
	for (r=0;r<3;r++)
	{
		for (c=0;c<2;c++)
		{
				scanf("%d",&mat1[r][c]);
		}
	}
	printf("enter the elements of 2 matrix: ");
	for (r=0;r<3;r++)
	{
		for (c=0;c<2;c++)
		{
				scanf("%d",&mat2[r][c]);
		}
	}
	for (r=0;r<3;r++)
	{
		for (c=0;c<2;c++)
		{
			diff[r][c]=mat1[r][c]-mat2[r][c];
		}
	}
	printf("The difference of matrix is : \n");
		for (r=0;r<3;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("%d\t",diff[r][c]);
		}
		printf("\n");
	}
	

}
