#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(){
	int num,rem,c=0;
	printf("Enter a no.");
	scanf("%d", &num);
	if(1>num || num>500)
	{
		printf("Enter no between 1 to 500");	
	}else{
		int original=num;
	
		while(num!= 0) //check number not equal to zero or nost
		{
			rem=num%10;
			c = c + rem*rem*rem;
			if (num>10)//check the number greater than 10 for devide the num by 10
			{
				num = num/10;
			}
			else 
			{
				num = 0;
			}	
		}
		printf("%d\n",c);
		if(original==c){
			printf("It is an amstrong number.");
		}
		else{
			printf("It is not an amstrong number.");
		}
	
	}
	
	return 0;
}
