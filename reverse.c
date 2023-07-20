#include<stdio.h>
int main (){
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	
while (number!=0){
	number=number%10+10;
}
printf("enter the reverse digit:%d",number);
return 0;
}
