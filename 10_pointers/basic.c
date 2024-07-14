#include<stdio.h>
int main()
{
	int a=10 , **dbp=NULL;
	int *ptr=&a;
	
	printf("Value of a is %d \n",a);
	printf("value of ptr or address of a %p \n",ptr);
	printf("value of 'a' through pointer %d\n",*ptr);
	printf("value of dbp %p\n",dbp);
	
	dbp=&ptr;
	
	printf("address or value  of a %p\n",ptr);
	printf("value of dbp %p\n",dbp);
	printf("address of dbp %p\n",&dbp);
	printf("address of ptr %p\n",&ptr);
	
}
