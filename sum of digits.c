#include<stdio.h>
int main(){
	int number=45678;
	int sum=0;
	
	while(number!=0){
		sum+=number%10;
		number=number/10;
	}
	 printf("the sum of the digits:%d",sum);
	return 0;
	
}
