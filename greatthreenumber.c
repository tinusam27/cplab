/* programe to find greatest of three numbers
Author : Tinu Sam
Date : 06/02/2019
*/

#include<stdio.h>
void main(){
	int number1, number2, number3;
	printf("enter two interger number:");
	scanf("%d%d", &number1, &number2, &number3);
	/*check wheather the number 1 is greater than number 2*/
	/*check wheather the number 2 is greater than number 3*/
	if(number1>number2,number1>number3){
		printf("number %d is greater than %d",number1);
	}
		else if(number2>number3){
			printf("number %d is greater than %d",number2);
	}
	else{
		printf("number %d is greater than %d",number3);
	}
}

