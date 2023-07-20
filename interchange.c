#include<stdio.h>
int main (){
	int c,d;
	printf("enter the number of C:");
	scanf("%d",&c);
	printf("enter the number of D:");
	scanf("%d",&d);
	
	//number interchange
	c=c+d;
	d=c-d;
	c=c-d;
	
	printf("\nThe value of c is %d ", c);
	printf("\nThe value of d is %d ", d);
	 return 0;
}
