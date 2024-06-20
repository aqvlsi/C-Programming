#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p=(int *)malloc(sizeof(int) *5);
if (p==NULL)
{
	printf("Failed to allocate memory.\n");
	return 1;
}
for (int i=0; i<=4; i++)
{
	p[i]=i;
}
for (int i=0; i<=4; i++)
{
	printf("Array values %d:%d\n",i,p[i]);
}
return 0;
}
