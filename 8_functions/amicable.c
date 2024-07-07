#include<stdio.h>
int amicable(int a, int b)
{
	int sum1=0, sum2=0, i;
	for(i=1; i<a; i++)
	{
		if(a%i==0)
		{
			sum1=sum1+i;
		}
	}
	for(i=1; i<b; i++)
	{
		if(b%i==0)
		{
			sum2=sum2+i;
		}
	}
	if(sum1==b && sum2==a)
		return 1;
	else
		return 0;
}
int main()
{
	int num1,num2,res;
	printf("Enter two number to check :");
	scanf("%d %d",&num1,&num2);
	
	res=amicable(num1,num2);
	if(res)
		printf("yes it is amicable number\n");
	else
		printf("no it is not amicable number\n");
}
		
