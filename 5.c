#include<stdio.h>
int main(){
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("enter year is leap year.",year);
	}
	else if(year%100==0)
	{
		printf("enter year is not leap year.",year);
	}
	else if(year%4==0)
	{
		printf("enter year is leap year.",year);
	}
	else
	printf("enter year is not leap year.");
	return 0;19
}
