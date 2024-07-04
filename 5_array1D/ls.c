#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize] , n , i , ele , flag=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("The elements of the array are:\n");
	for(i=0; i<n; i++)
		printf("%d\n",arr[i]);
		
	//linera search
	
	printf("Enter the elements you want to search : ");
	scanf("%d",&ele);
	
	for(i=0; i<n; i++)
	{
		if(arr[i]==ele)
		{
			printf("element found %d \n",i+1);
			flag=1;
		}
	}
	if(!flag)
		printf("Element not found\n");
}

