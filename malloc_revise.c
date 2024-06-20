#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr= (int *)malloc(sizeof(int)*5);
if(ptr==NULL)
{
printf("Memory not allocated.\n");
return 1;
}
printf("enter array values:\n");
for(int i=0; i<=4;i++)
{
scanf("%d",&ptr[i]);
}
for(int i=0; i<=4;i++)
{
printf("The value at index %d:%d\n",i,ptr[i]);
}
free(ptr);
}

