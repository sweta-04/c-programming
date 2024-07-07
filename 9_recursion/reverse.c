#include<stdio.h>
int reverse(int num, int rev)
{
	if(num==0)
		return rev;
		
	rev = rev*10 + (num%10) ;
	return reverse(num/10,rev);

}

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	printf("reverse of %d is %d \n", n, reverse(n,0));
}
