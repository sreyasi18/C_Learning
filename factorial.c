#include<stdio.h>
#include<conio.h>
int factorial();
int main(){
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	int res=factorial(num);

	printf("the factorial is %d",res);
	return 0;
}
int factorial(num){
	int fact=1;
		while(num!=0)
		{
			fact=fact*num;
			num--;
		}
		return fact;
	}
