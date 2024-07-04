#include<stdio.h>
#define max 100

int main()
{
	int arr1[max][max], arr2[max][max] , sum[max][max] , row , col , i , j ;
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
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
			
	
		}
	}
	
	printf("The sum of two matrix is :\n");
	for(i=0;i<row;i++)
	{
		for(j=0; j<col; j++)
			printf("%d\t",sum[i][j]);
		printf("\n");
	}
}
	
	
	
