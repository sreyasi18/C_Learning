#include<stdio.h>
int roman (int year);
int main(){
	int year;
	printf("enter year:");
	scanf("%d",&year);
	roman(year);
}
int roman( year)
{
	if (year>=1000)
	{
		printf("m");
	
	}
	else if(year>=500)
	{
		printf("d");
	
	}
	else if(year>=100)
	{
		printf("c");
		
	}
	else if(year>=50)
	{
		printf("l");
		
	}
	else if(year>=10)
	{
		printf("x");
	
	}
	else if(year>=5)
	{
		printf("v");
		
	}
	else if(year>=1)
	{
		printf("i");
	
	}
	return 0;
}

