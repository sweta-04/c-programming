#include<stdio.h>

int power(int x, int n)
{	
	int pow=x, i;

	if(n==0)
		return 1;
	
	for(int i=1; i<n; i++)
	{
		pow = pow*x;
	}
	return pow;
}

int main()
{
	int x,n;
	printf("Enter the base and power :");
	scanf("%d %d",&x,&n);
	
	printf("calculated power is %d \n:",power(x,n));
}
	
