#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char str1[max], str2[max];
    int length1, length2, match=0, i;

    printf("Enter first string: ");
    fgets(str1,max,stdin);

    printf("Enter second string: ");
    fgets(str2,max,stdin);

    length1 = (strlen(str1)-1);
    length2 = (strlen(str2)-1);

    if(length1==length2)
    {
        for(i=0; i<length1;i++)
        {
            if(str1[i]==str2[i])
                match = 1;
            else
                break;
        }
    }

    if(match)
        printf("both strings are equal");
    else
        printf("not equal");
}