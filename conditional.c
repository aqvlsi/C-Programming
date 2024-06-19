#include<stdio.h>
int main()
{
	int x,y;
        //int y;
	printf("Enter X: \n");
        scanf("%d",&x);
        printf("Enter Y: \n");
        scanf("%d",&y);
	if(x>y)
	{
	printf("The x is  greater than y. \n");
	}
	else if (x<y)
	{
	printf("The y is  greater than x.\n");
	}
	else
	{
	printf("The x & y are equal.\n");
	}
	}
