#include<stdio.h>
void main()
{
	int number,reminder=0,sum=0,t;
	for(number=100;number<=500;number++)
		{
			t=number;
			sum=0;
			while(t>0)
			{
			reminder=t%10;
			sum=sum+(reminder*reminder*reminder);
			t=t/10;
			}
		if(number==sum)
		printf("%d\n",number);
		}
}
