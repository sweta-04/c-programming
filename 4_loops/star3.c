#include<stdio.h>
int main()
{
	int row,i,j;
	printf("Enter the no of roow:");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
			printf("\t");
		
		for(j=1;j<=(i*2)-1;j++)
			printf("<3\t");
			
		printf("\n");
	}
		
	
	
	
}	
	
