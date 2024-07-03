#include<stdio.h>
#include<math.h>

int main()
{
	int num,sum=0, count=0, digit, n, rem;
	printf("Enter the number:");
	scanf("%d",&num);
	
	n=num;

	while(num!=0)
	{
		digit=num%10;
		count++;
		num=num/10;
	}
	
	num=n;
	
	while(num!=0)
	{
		digit=num%10;
		rem = pow(digit,count);
		sum = sum+rem;
		num = num/10;
		
	}
	
	if(n==sum)
		printf("ARMSTRONG\n");
	else
		printf("NOT ARMSTRONG\n");
}
