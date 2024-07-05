#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 99


void main()
{
    char string[max], name[] = "Sweta Kumari", str[]={'s','w','E','\0'};
    int length, i;

    printf("Enter a string : ");
    fgets(string, max, stdin);

    length = strlen(string);
    printf("Length of input : %d\n", length-1);

    puts(name);

    printf("Lowercase : %s", strlwr(string));
    printf("Uppercase : %s", strupr(string));

}