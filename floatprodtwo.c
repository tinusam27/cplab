#include<stdio.h>
float multi(float a ,int b);
void main()
{
	int a;
	float b,c;
	printf("enter the int number and float number");
	scanf("%f%d",&b,&a);
	c=multi(b,a);
	printf("product is %f",c);
}
float multi(float x, int y)
{
	float z;
	z=x*y;
	return z;
}
