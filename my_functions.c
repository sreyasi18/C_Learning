#include<stdio.h>
#include "my_lib.h"
int main(){
	int res=1;
	int num;
	printf("enter a no:");
	scanf("%d",&num);
    int factorial=	fact(num,res);
	printf("the factorial is %d",factorial);
	return 0;
}
