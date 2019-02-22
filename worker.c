#include<stdio.h>
void main()
{
	float time;
	printf("enter the time of the worker");
	scanf("%f",&time);
	if(time>=2&&time<3)
		printf("the worker is said to be highly efficient");
	if(time>=3&&time<4)
		printf("the worker is ordered to improve speed");
	if(time>=4&&time<5)
		printf("the worker is given training to improve his speed");
	if(time>5)
		printf("the worker is terminated");
}
