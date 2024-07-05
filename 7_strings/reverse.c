#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100
void main()
{
    char str[max], strrev[max];
    int i,length;

    printf("Enter the string: ");
    fgets(str,max,stdin);

    length=(strlen(str)-1);

    for(i=0;i<length;i++)
    {
        strrev[i]=str[length-1-i];
    }

    strrev[length] = '\0';

    puts(str);
    puts(strrev);

} 