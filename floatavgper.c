#include<stdio.h>
float avg(int a1,int a2, int a3);
void main()
{
	int t1,t2,t3;
	printf("enter the mark of subjet1,subject2,subject3",t1,t2,t3);
	scanf("%d%d%d",&t1,&t2,&t3);
	a=avg(t1,t2,t3);
	printf("avg and percentage=%f",a);
}
float avg(int a1,int a2, int a3)
