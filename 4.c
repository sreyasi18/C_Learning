#include<stdio.h>
int main(){
	int side1,side2,side3;
	printf("enter side1:");
	scanf("%d",&side1);
	printf("enter side2:");
	scanf("%d",&side2);
	printf("enter side3:");
	scanf("%d",&side3);
	
	if(side1<side2+side3)
	{
		printf("it is triangle.");
	}
	else if(side2<side1+side3)
	{
		printf("it is triangle");
	}
	else if (side3<side1+side2)
	{
		printf("it is trianle");
	}
	else
	printf("it is not triangle");
	return 0;
}
