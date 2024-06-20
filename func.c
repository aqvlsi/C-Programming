#include<stdio.h>
char func()
{
	char a;
	printf("Enter any character: \n");
	scanf(" %c",&a);
	if (a =='A')
	{
		printf("I am qadeer.\n");
	}
	else if (a =='B')
	{
		printf("I am not qadeer.\n");
	}
	else
	{
		printf("Invalid.\n");
	}
		return a;
	
}
int main()
{
	func();
	return 0;
}

