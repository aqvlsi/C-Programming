#include<stdio.h>
int (*func_ptr)(int,int);
int add(int a, int b)
{
	return a+b;
}
int main()
{
	func_ptr=add;
	printf("Result is : %d\n",func_ptr(3,4));
			return 0;
}

