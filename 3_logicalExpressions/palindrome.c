#include<stdio.h>
int main()
{
	int num,n,rev=0,dig;
	printf("Enter numver:");
	scanf("%d",&num);
	
	n=num;
	while(num!=0)
	{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;
	}
	if(n==rev)
		printf("yes");
	else
		printf("no");
}
