#include<stdio.h>
int my_function(int x,int y);
	
int main(){
	int result=my_function(5,3);
	printf("Result is =%d",result);
	return 0;
}
int my_function(x,y){
	return x+y;
}
