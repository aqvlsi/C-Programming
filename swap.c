#include<stdio.h>
void func(int a, int b)
{
     printf("The values of a & b are %d:%d\n ",a,b);
	     int temp=a;
             a=b;
             b=temp;
             printf("The values of a & b are %d:%d\n ",a,b);
}

int main()
{
	void (*ptr)(int,int);
	ptr=func;
        int a=10;
	int b=11;
	func(a,b);
	ptr(a,b);

	}
