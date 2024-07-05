#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100
void main()
{
    char str[max];
    int i, length,  isPalindrome=1;

    printf("Enter the string:-");
    fgets(str,max,stdin);

    length=strlen(str);
    if(str[length-1]=='\n')
    {
        str[length-1]='\0';
        length--;
    }

    for(i=0;i<length;i++)
    {
       if( tolower(str[i]) != tolower(str[length-1-i]) )
       {
            isPalindrome=0;
            break;
       }
    }

    if(isPalindrome)
        printf("yes it is a palindrome\n");
    else
        printf("Not a palindrome\n");
    

}