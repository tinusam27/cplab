#include<stdio.h>
void main()
{
	int ramage,shyamage,ajayage;
	printf("enter the ages of ram,shyam,ajay");
	scanf("%d%d%d",&ramage,&shyamage, &ajayage);
	if(ramage<shyamage&&ramage<ajayage){
		printf("ram is younger");
	}
	if(shyamage<ramage&&shyamage<ajayage){
		printf("shyam is younger");
	}
	if(ajayage<ramage&&ajayage<shyamage){
		printf("ajay is younger");
	}
}
	
