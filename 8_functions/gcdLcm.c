#include<stdio.h>

int gcd(int a, int b)
{	
	int i, res;
	for(i=1; i<=a && i<=b; i++)
	{
		if(a%i==0 && b%i==0)
		{
			res=i;
		}
	}
	return res;
	
}

int lcm(int a, int b)
{
	return ((a*b)/gcd(a,b));
}


int main()
{
	int x,y, rg, rl;
	printf("Enter two numbers :- ");
	scanf("%d %d",&x,&y);
	
	rg = gcd(x,y);
	rl = lcm(x,y);
	
	printf("GCD of %d and %d is :- %d\n",x,y,rg);
	printf("LCM of %d and %d is :- %d\n",x,y,rl);
}
