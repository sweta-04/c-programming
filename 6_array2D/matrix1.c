#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize][maxsize] , size , i , j , row , col ;
	printf("Enter the no of row and col : ");
	scanf("%d %d" ,&row, &col);
	
	printf("Enter the elements in matrix  :\n");
	for(i=0;i<row;i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	printf("The 2-d matrix is :\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
