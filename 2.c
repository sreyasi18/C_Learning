#include<stdio.h>
int main(){
	int num,sum;
	printf("enter num:");
	scanf("%d",&num);
	 
	while( num !=0)
	{
		sum = sum+num%10;
		num = num/10;
		
	}
	printf("the sum of the digits:%d",sum);
	return 0;
}
