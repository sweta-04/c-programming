#include<stdio.h>
#include<math.h>
int main(){ 
    int x1,x2,y1,y2,dist;
    printf("Enter the coordinets of point 1:\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinets of point 2:\n");
    scanf("%d %d",&x2,&y2);

    dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("distance is %d",dist);

}