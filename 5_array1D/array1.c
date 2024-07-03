#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize], size,i;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	printf("Enter the elements of the arrray: ");
	
	for(i=0;i<size;i++)
	{	
		scanf("%d",&arr[i]);
	}
	printf("The elemnts of the array are: \n");
	for(i=0;i<size;i++)
	{
		printf("[%d]\n",arr[i]);
	}
}
