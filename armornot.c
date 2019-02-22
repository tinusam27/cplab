#include<stdio.h>
void main()
{
	int number, reminder=0,sum=0 ,t;
	printf("enter the value of number");
	scanf("%d",&number);
	t=number;
	while(number>0)
		{
		reminder=number%10;
		sum=sum+(reminder*reminder*reminder);
		number=number/10;
		}
if(t==sum)
printf("number is a armstrong number",sum);
else
printf("number is not a armstrong number");
}

		
