#include<stdio.h>
#define maxsize 100
int main()
{
	int arr[maxsize] , found=0 , i , n,ele;
	
	printf("Enter  the size of array:");
	scanf("%d",&n);
	
	printf("Enter the elments of the array :\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("The elements of the array are : \n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);

///linear serach

	printf("Enter the element you want to search : ");
	scanf("%d",&ele);
	
	for(i=0; i<n; i++)
	{
		if(arr[i]==ele)
		{
			printf("element found  at position %d \n",i+1);
			found = 1;
			break;
		}
	}
	
	if(!found)
		printf("element not found \n ");
	

}
