#include<stdio.h>
void main()
{
	int number,reminder,reverse=0,t;
	printf("enter the number");
	scanf("%d",&t); 
	number=t;
	while(t>0)
	{
		reminder=t%10;
		reverse=reverse*10+reminder;
		t=/10;
	}
if(reverse==t)
printf("the number is palindrome");
else
printf("the number is not palindrome");
}
