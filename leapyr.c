//find out whether the year is leap year or not
#include<stdio.h>
int main(){
	int year;
	printf("enter the year:");
	scanf("%d",&year);

//leap year by nested if else	
//	//if year is completely divible via 4
//	if(year%4==0)
//	{
//		//if year is completely divisible via 4 and 100
//		if(year%100==0)
//		{
//			//if year is completely divisible via 4,100,400
//			if(year%400==0)
//			{
//				printf("%d is a leap year",year);
//			}
//			else
//			{
//				printf("%d is not a leap year",year);
//			}
//		}
//	  	else
//		{
//			printf("%d is a leap year",year);
//		}
//	}
//	else
//	{
//		printf("%d is not a leap year",year);
//	}

//leap year by conditional operator
//	if((year%4==0)&&((year%400==0)||(year%100!=0)))
//	{
//		printf("%d is a leap year",year);
//		
//	}
//	else
//	{
//		printf("%d is not leap year",year);
//	}

//leap year by ternery operator
((year%4==0)&&((year%400==0)||(year%100!=0))) ? printf("%d is a leap year",year) : printf("%d is not a leap year",year);
	return 0;
}


