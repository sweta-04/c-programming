#include<stdio.h>
#include<math.h>
int main(){ 
    int a,b,c,d,x1,x2;
    printf("Enter teh coefficient fo quadratic equation:");
    scanf("%d %d %d",&a,&b,&c);

    d=(sqrt(b*b-4*a*c));
    printf(" discriminat is %d\n",d);

    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;


    printf("roots of equation are is %d %d\n",x1,x2);

    return 0;

}