#include<stdio.h>
int gcd(int x, int y)
{
	if(y==0)
		return x;
	return gcd(y,x%y);
}

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	
	printf("GCD of %d and %d is %d\n", a, b, gcd(a,b));

}	
