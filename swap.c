#include<stdio.h>
void swap(int *,int *);//function declaration

int main(){
	int a,b;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
 	swap(&a,&b);//function call
	return 0;
}
//function definition
void swap(int *x, int *y){

	*x = *x + *y;
	*y=*x-*y;
	*x=*x-*y;
	printf("the swap no of x is %d\n",*x);
	printf("the swap no of y is %d\n",*y);
	
	
}
