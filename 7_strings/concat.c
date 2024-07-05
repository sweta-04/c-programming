#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100
void main()
{
    char str1[max], str2[max];
    int len1, len2;

    printf("Enter first string :-");
    fgets(str1,max,stdin);

    printf("Enter second string:");
    fgets(str2,max,stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if( str1[len1 -1] == '\n' )
    {
        str1[len1 -1] = '\0';
        len1--;
    }
    if( str2[len2 -1] == '\n' )
    {
        str2[len2 -1] = '\0';
        len2--;
    }

    printf("Result : %s\n", strcat(str1,str2));

}