#include<stdio.h>
int main()
{
	int size;
	printf("Enter size of array \n");
		scanf("%d",&size);
		printf("Enter Array Values:\n");
		int arr[size];
		for (int i=0; i<=size ; i++)
		{
			scanf("%d", &arr[i]);
		}
		int *ptr = arr;
		for (int i=0; i<=size ; i++)
		{
			printf("Array is %d: %d\n",i,*(ptr+i));
					}
					return 0;
}
