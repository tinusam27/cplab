#include<stdio.h>
void main()
{
	float sum=0,fact=1,i;
	for(i=1;i<=7;i++)
		{
			fact=fact*i;
			sum=sum+(1/fact);
		}
	printf("sum of the series is %f",sum);
}
