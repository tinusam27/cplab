#include<stdio.h>
void main()
{
	int range,i,j;
	printf("enter the range");
	scanf("%d",&range);
	for(i=1,i<=range,i++);
		{
			for(j=5,j>=i,j--)
				printf("*",j);
		printf("\n");
		}
}
