#include<stdio.h>
int main()
{
	int n,fact=1,dig,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	
	while(n!=0)
	{
		dig=n%10;
		for(int i=2;i<=dig;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
		fact=1; 
	}
	if(num==sum)
		printf("YES STRONG NUMBER");
	else
		printf("NOT STRONG NUMBER");
}
		
