#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("a is larger");
    else if(b>c && b>a)
        printf("b is larger");
    else
         printf("c is larger");
        
    return 0;
}