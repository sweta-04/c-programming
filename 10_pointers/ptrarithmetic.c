
#include<stdio.h>
int main()
{
	/*
	int a=10, *p=&a  ;
	char ch= 'N' , *p=&ch;
	
	printf("value of a is %d\n ",a); 
	printf("Address of a is %p \n", &a);
	printf("Address of a is %p \n", p);
	
	//aruthmetic
	
	printf("Address of p+1 is %p \n", p+1);
	printf("Address of p++ is %p \n", p++);//post increment
	printf("Address of a is %p \n", p);
	*/
	
	//character pointer
	
	char ch= 'N' , *p=&ch;
	
	printf("value of ch is %c\n ",ch); 
	printf("Address of ch is %p \n", &ch);
	printf("Address of ch is %p \n", p);
	
	//aruthmetic	
	printf("Address of p+1 is %p \n", p+1);
	printf("Address of p++ is %p \n", p++);//post increment
	printf("Address of p is %p \n", p);
}	
