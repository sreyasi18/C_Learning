//Check reverse number is same or not
#include<stdio.h>
#include<conio.h>
int main(){
	int num,num_1,original,rem,rev=0;

	int m=1;	
	// Take an input
	printf("enter a number:");
	scanf("%d",&num);
	// Keep input as the original number
	original = num;

	// Iterate until input is zero
	while(num!=0)
	{
		// Getting length of the input number
		int count=0;
		num_1 = num;
		while(num_1!=0)
		{
			num_1 = num_1/10;
			count++;
		}
		//	printf("\nlength is %d",count);
		rem = num%10;
	
		// Multiplying last digit of the number by (10^length - 1)
		int i;
	
		for(i=1;i<count;i++)
		{
			rem = rem*10;
		}
		// Calculating reverse number
		rev = rev + rem;		
	
		//	printf("\n rev is %d",rev);
		// Getting quotient 
		num = num/10;		
	}
	printf("\n%d is reversed number\n",rev);

	//check reversed number is same or not
	(original==rev)?printf("reversed number is same",rev):printf("reversed number is not same",rev);
	return 0;
}
