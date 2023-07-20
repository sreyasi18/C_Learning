#include<stdio.h>
int main(){
	char opp;
	float num1,num2,result;
	printf("enter the operator like +,-,*,/:");
	scanf("%c",&opp);
	printf("enter the value of num1 /n and num2:");
	scanf("%f,%f",&num1,num2);
	switch(opp){
		case'+': result=num1+num2;
		break;
		case'-': result=num1-num2;
		break;
		case'*': result=num1*num2;
		break;
		case'/': result=num1/num2;
		break;
		default:printf("invalid");
	}
	printf("the result:%f",result);
	return 0;
}
