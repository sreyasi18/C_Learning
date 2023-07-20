#include<stdio.h>
int main(){
	int i,max,min,num,limit,range;
	printf("enter the limit:");
	scanf("%d",&limit);
	printf("enter the number:");
	scanf("%d",&num);
	max=min=num;
	for(i=1;i<limit;i++)
	{
		printf("enter the num");
		scanf("%d",&num);
		if(num>max)
		max=num;
		if(num<min)
		min=num;
	}
	range=max-min;
	printf("\n%d is the range",range);
	return 0;
	
	}

