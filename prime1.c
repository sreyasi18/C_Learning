#include<stdio.h>
int main(){
	int num,i;
	for(num=2;num<=300;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			break;
		}
		if(i==num)
		printf("no is prime %d");
	}
}
