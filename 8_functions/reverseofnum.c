#include<stdio.h>
int reverse(int num)
{
	int rem, new=0, i;
	while(num!=0)
	{
		rem=num%10;
		new=new*10+rem;
		num=num/10;
	}
	return new;
}

int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("reverse of %d is %d \n",n, reverse(n));
}
