#include <stdio.h>
int main(void)
{
	int arr[5]={1,2,3,4,5};
	int *ptr= arr+1;
	printf("Print array: %d\n",*ptr);
	return 0;
}
	
