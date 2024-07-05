#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char st1[max], st2[max];
    int isCompare;

    printf("Enter first string:-");
    fgets(st1,max,stdin);

    printf("Enter second string:-");
    fgets(st2,max,stdin);

    isCompare= strcmp(st1,st2);

    if(!isCompare)
        printf("yes matched\n");
    else    
        printf("Not matched\n");


        


    
}