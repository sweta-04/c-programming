#include<stdio.h>

int power (int num, int pow)
{
	if(pow ==0)
		return 1;
		
	else if(pow % 2 == 0 )
		return (power(num, pow/2) * power(num, pow/2));
	
	else
		return ( num * power (num,pow/2) * power ( num, pow/2));
	
}

void main()
{
	 int number, p, res;
	 
	 printf("Enter the base and the power factor : ");
	 scanf("%d %d", &number, &p);
	 
	 res = power(number, p );
	 
	 printf("%d\n", res);
}
