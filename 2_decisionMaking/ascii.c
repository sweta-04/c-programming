#include<stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if(a>=64 && a<=90)
        printf("The character is uppercase\n");
    else if(a>=97 && a<=122)
        printf("The character is lowercase\n");
    else if(a>=48 && a<=57){
        printf("The character is a digit\n");
    }
    else
        printf("The character is a special character\n");
}