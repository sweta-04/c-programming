#include<stdio.h>

void bin(int num)
{
	int arr[32],i=0,j;
	if(num==0)
		printf("0\n");
	while(num>0)
	{
		arr[i]=num%2;
		num=num/2;
		i++;
	}
	for(j=0; j<i; j++)
	{
		printf("%d",arr[j]);
	}
	printf("\n");
}

void main()
{
	int num;
	printf("enter the number :-");
	scanf("%d",&num);
	
	printf("the binary of the %d is :-",num);
	bin(num);
}
		
