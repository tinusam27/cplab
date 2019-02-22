#include<stdio.h>
void main()
{
	int length,breadth,area,perimeter;
	printf("enter the length");
	scanf("%d",&length);
	printf("enter the breadth");
	scanf("%d",&breadth);
		area=length*breadth;
		perimeter=2*length+breadth;
	if(area>perimeter)
		printf("the area is greater");
	else
		printf("the area is not greater");
}
