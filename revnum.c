#include<stdio.h>
void main()
{
	int number; reverse=0, reminder;
	printf("enter the value of number");
	scanf("%d",&number);
	while(number>0)
		{
		reminder=number%10;
		reverse=reverse*10+reminder;
		number=number/10;
		}
	printf("reverse of number is %d",reverse);
}
	
