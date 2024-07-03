#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize] , size , i , ele , found=0;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	printf("Enter the elements of the arrray : \n");
	
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
	printf("The elements of the array are : \n");
	for(i=0;i<size;i++)
		printf("[%d]\n",arr[i]);
		
	printf("Enter the element you want search : ");
	scanf("%d",&ele);
	
	for(i=0;i<size;i++)
	{
		if ( arr[i] == ele )
		{
			printf("Element found at position %d \n ",i+1);
			found = 1;
		}		
	}
	
	if(!found)
		printf("Element not found \n");

}
