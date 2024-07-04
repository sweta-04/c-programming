#include<stdio.h>
#define max 100

int main()
{
	int arr1[max][max], arr2[max][max] , mul[max][max] , row , col , i , j ,k ;
	printf("Enter the no of row and col :");
	scanf("%d %d",&row,&col);
	
	//input for matrix 1
	printf("Enter the elements of matrix 1 :\n");
	for(i=0;i<row;i++)
	{
		for(j=0; j<col; j++)
			scanf("%d",&arr1[i][j]);
	}
	
	//input for 2nd matrix
	printf("Enter the elements of matrix 1 :\n");
	for(i=0;i<row;i++)
	{
		for(j=0; j<col; j++)
			scanf("%d",&arr2[i][j]);
	}
	//multiplication of two matrix
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mul[i][j]=0;
			for(k=0;k<col;k++)
			{
				mul[i][j]=mul[i][j]+(arr1[i][k]*arr2[k][j]);
			
			}
		}
	}
	
	printf("The multiplication of two matrix is :\n");
	for(i=0;i<row;i++)
	{
		for(j=0; j<col; j++)
			printf("%d\t",mul[i][j]);
		printf("\n");
	}
}
	
	
	
