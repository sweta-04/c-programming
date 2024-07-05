#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 99

void main()
{
    char str[max];
    int len ;

    printf("Enter the string : ");
    fgets(str, max, stdin);
    
    len = strlen(str) - 1;


    printf("Length : %d\n", len);
}