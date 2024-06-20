#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size of array:\n");
	scanf("%d", &size);
	printf("Enter array values:\n");
	int arr[size];
	for (int i=0 ; i < size ; i++)
	{
		arr[i]=i*5;
	}
	for (int i=0 ; i < size ; i++)
	{
	printf("The array value at index %d = %d\n",i,arr[i]);
	}
}


