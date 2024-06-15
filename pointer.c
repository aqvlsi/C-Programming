#include <stdio.h>
int main(void)
{
	int y=5;
	int *ptr;
	ptr = &y;
	printf("The Ptr is: %p\n",ptr);
	printf("The Y is: %d\n",y);
	printf("The Y is: %d\n",*ptr);
        printf("The Y is: %p\n",&ptr);
	return 0;
}
