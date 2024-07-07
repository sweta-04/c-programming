#include<stdio.h>

int power(int x, int n)
{	
	int num = x, i;

	if(n==0)
		return 1;
		
	if(n<0)
		return 0;
	
	for(int i=1; i<n; i++)
	{
		num = num*x;
	}
	return num;
}

int main()
{
	int x,n;
	printf("Enter the base and power :");
	scanf("%d %d",&x,&n);
	
	printf("calculated power is %d \n:",power(x,n));
}
	
