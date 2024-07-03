#include<stdio.h>
int main()
{
	int n,t1,t0,tn,i;
	
	printf("Enter the no of terms you want to print : ");
	scanf("%d",&n);
	
	t0 = 0;
	t1 = 1;
	tn = t0 + t1;

	printf("fibonacci series is : ");

	for(i=1 ; i<=n ; i++)
	{
		printf("%d \t",t0);
		t0=t1;
		t1=tn;
		tn=t0+t1;
	}
}
