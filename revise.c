#include<stdio.h>
int main()
{
	int x=5;
	int *ptr = &x;
	printf("The values is : %d\n",*ptr);
		printf("The values address is : %p\n",ptr);
                       printf("The values adress 2  is : %p\n",&x);
                             printf("Pointer address is: %p\n",&ptr);
}

