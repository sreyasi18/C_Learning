#include<stdio.h>
int leap();

int main(){
	int y;
	printf("enter the year:");
	scanf("%d",&y);
	leap(y);
	return 0;
}

int leap(year)
{
	if (year%400==0)
	{
		printf("%d is leap year.",year);
	}
	else if(year%100==0)
	{
		printf("%d is not leap year.",year);
	}
	else if (year%4==0)
	{
		printf("%d is leap year.",year);
	}
	else 
	{
		printf("%d is not leap year.",year);
	}
	return 0;
}
