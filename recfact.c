#include<stdio.h>
int fact (int num);
void main()
{
	int num,f;
	printf("enter the number");
	scanf("%d",&num);
	f=fact(num);
	printf("the factorial of %d is %d",num,f);
}
	int fact (int num)
{
	int fac=1,i;
	if (num==1)
		return 1;
	else
		fac=num*fact(num-1);

     return fac;
}
	
