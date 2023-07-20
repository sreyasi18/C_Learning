#include<stdio.h>
int sum(int k);//function declaration 
int main(){
	int result=sum(10);//function call
	printf("%d",result);
	return 0;
}
//function definition
int sum(int k){
	if(k>0){
		return k+sum(k-1);
	}
	else{
		return 0;
	}
}
