#include<stdio.h>
int power(int x, int n)
{
	if(n==0)
		return 1;
	return x * power(x,n-1);
}

int main()
{
	int x, n;
	printf("Enter base and power of the number:");
	scanf("%d %d",&x,&n);
	
	printf("calculated power is %d",power(x,n));
}

