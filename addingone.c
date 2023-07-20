#include<stdio.h>
int main(){
	int num;
	int sum = num;
	int m=1;
	int count=1;
	int i;
	printf("enter any no.");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum = sum+m;
		m=1;
		for(i=1;i<=count;i++)
		{
			m=m*10;
		}
		count++;
	num=num/10;	
	}
}
