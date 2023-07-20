#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("after swap a is:%d\n",a);
	printf("after swap b is:%d",b);
	return 0;
	
}
