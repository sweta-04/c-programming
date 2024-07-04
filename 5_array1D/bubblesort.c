#include<stdio.h>
#define maxsize 100

int main()
{
	int arr[maxsize] , size , i , x , flag=1;
	printf("Enter the size of arrray: ");
	scanf("%d",&size);
	
	printf("Enter the elements ofthe array: \n");
	for(i=0;i<size; i++)
		scanf("%d",&arr[i]);
	
	printf("The elements of the array are: \n");
		for(i=0;i<size; i++)
			printf("%d\n",arr[i]);
		
//bubble sort
	
	while(flag)
	{
		flag = 0;
		for(i=0; i<size-1; i++)
		{
			if(arr[i]>arr[i+1])
			{
				x=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=x;
			
				flag=1;
			}

		}
	}
	
	printf("The elements of the array after sort: \n");
		for(i=0;i<size; i++)
			printf("%d\n",arr[i]);
}
	
