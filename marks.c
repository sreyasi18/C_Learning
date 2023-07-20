#include<stdio.h>
int i;
i=3;
int roll[10];
int roll[10]={5,20,10,18,9,4,6,12,15,13};
int avg();
int main(){
	int mark[10]={40,80,55,60,70,30,35,40,68,78};
	int res= int avg(int marks[]);
	printf("average is %d",res);
	return 0;
}
int avg(int marks[])
{
	int sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+marks[i];
	}
	int avg=sum/10;
	return avg;
}
