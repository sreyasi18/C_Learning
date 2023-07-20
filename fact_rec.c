#include<stdio.h>
int fact(int num,int res);
int main(){
	int res=1;
	int num;
	printf("enter a no:");
	scanf("%d",&num);
    int factorial=	fact(num,res);
	printf("the factorial is %d",factorial);
	return 0;
}
int fact(int num,int res){
	res=res*num;
	if(num-1!=0)
	{
		return fact((num-1),res); //factorial using reccurssive function
	}
}

