#include<stdio.h>
int main (){
	int w,x,y,z;
	printf("enter with draw amount:");
	scanf("%d",&w);
	x=w/100;
	w=w%100;
	y=w/50;
	w=w%50;
	z=w/10;

	printf("note of 100:%d\n",x);
	printf("note of 50:%d\n",y);
	printf("note of 10:%d\n",z);
	return 0;
}
