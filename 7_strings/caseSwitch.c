#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
	char str1[max], str2[max];
	printf("enter the name:");
	
	fgets(str1,max,stdin);
	printf("%s",str1);
	
	printf("name in uppercase is %s", strupr(str1));
	printf("name in lowercase is %s", strlwr(str1));
	
}