#include <stdio.h>
int main(void)
{
        int size;
	printf("Enter the size of array:\n");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter  Array Elements:\n");
		for(int i=0; i <= size; i++)
		{
	        scanf("%d", &arr[i]);
		}
		int *ptr = arr;
		for(int i=0; i <= size; i++)
		{
		printf("Array element %d: %d\n", i, ptr[i]);
		}
	       	return 0;
}


