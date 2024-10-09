#include<stdio.h>
int main()
{
	int r,c,mat1[3][3],mat2[3][3],prod[3][3];
	printf("enter elements of first matrix: ");
	for (r=0;r<3;r++)
		{
		for( c=0;c<3;c++)
		scanf("%d",&mat1[r][c]);
	}
	printf("enter elements of second matrix: ");
	for (r=0;r<3;r++)
		{
		for( c=0;c<3;c++)
		scanf("%d",&mat2[r][c]);
	}
	for (r=0;r<3;r++)
		{
		for( c=0;c<3;c++)
	prod[r][c]=mat1[r][c]*mat2[r][c];
}
printf("The sum of matrix is: \n");
	for (r=0;r<3;r++)
		{
		for( c=0;c<3;c++)
	printf(" %d",prod[r][c]);
	}
	//printf("\n");
	
}
