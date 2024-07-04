#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize] , n , i , ele , flag=0, low, high;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("The elements of the array are:\n");
	for(i=0; i<n; i++)
		printf("%d\n",arr[i]);

//max min element in arrray

	low=arr[0];
	high=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>high)
			high=arr[i];
			
		if(arr[i]<low)
			low=arr[i];
	}
	printf("Highest element in array is :%d\n",high);
	printf("Lowest element in array is :%d\n",low);
}
			
			
