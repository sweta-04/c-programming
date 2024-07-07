#include<stdio.h>
int sum(int num)
{
	if(num==0)
		return 0;
	return num + sum(num-1);
	
}
int main()
{
	int n;
	printf("Enter the number upto which you want the sum : ");
	scanf("%d",&n);
	
	printf("sum upto %d natural number is %d\n", n, sum(n));
}
