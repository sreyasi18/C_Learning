#include<stdio.h>
void leap(int year); // function declaration

int main(){
	int y;
	printf("enter the year:");
	scanf("%d",&y);
	leap(y); // function call
	return 0;
}

// function definition
void leap(year)
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
//	return 0;
}
