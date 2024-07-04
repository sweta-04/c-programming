#include<stdio.h>
#define max 100

void main()
{
	int array[max], size, i, j, high, lar;
	
	printf("Enter the size of array : ");
	scanf("%d", &size);
	
	printf("Enter the elements : \n");
	for(i=0; i<size; i++)
		scanf("%d", &array[i]);
		
	high = array[0];
	
	for(i=0; i<size; i++)
	{
		if(array[i] > high)
			high = array[i];
	}
	
	lar = array[0];
	
	for(i=0; i<size; i++)
	{
		if(array[i] > lar && array[i] < high)
			lar = array[i];
	}
	
	printf("Highest : %d\n2nd Highest : %d\n", high, lar);
}
