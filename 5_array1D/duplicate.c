#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize] , n , i , j , k  ;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements of the array : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("The  initial elements of the array are:\n");
	for(i=0; i<n; i++)
		printf("%d\n",arr[i]);

// delete dupicate elements

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j; k<n; k++)
				{
					arr[k] = arr[k+1];
				}
				
				j--;
				n--;
			}
		}
	}
	
	printf("The  elements of the updated array are:\n");
	for(i=0; i<n; i++)
		printf("%d\n",arr[i]);


}


















