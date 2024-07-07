#include<stdio.h>
#include<math.h>

int bintodec(int num)
{
	int i=0,rem,dec=0;
	if(num<=0)
		return 0;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		dec=dec+rem*pow(2,i);
		i++;
	}
	return dec;
}
int main()
{
	int num,res;
	printf("Enter the decimal number: ");
	scanf("%d",&num);
	
	res=bintodec(num);
	printf("Decimal of %d is %d\n" , num,res);
}

