#include<stdio.h>
int main()
{
	int row,i,j;
	printf("eNTER THE NO OF ROWS:");
	scanf("%d",&row);
	
	for(i=row;i>=1;i--)
	{
		for(j=1;j<=row-i;j++)
			printf(" ");
		for(j=1;j<=(2*i)-1;j++)
			printf("*");
		printf("\n");
	}
}
