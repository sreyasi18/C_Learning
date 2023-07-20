#include<stdio.h>
int main(){
int i,n=6; /*for take 6 rows*/
char j;
int k,s=-2;/*take space by -2*/	

for (i='F';i>='A';i--) /*loop running from A to F*/
	{
		/*for first part where the value of j will be A and  less than equal to value of i and the value of j will be increment*/
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		/*for the value of j is E when the value of j will be greater than equal to i*/
		for(j='E';j>=i;--j){
			printf("*");
		}
		
		
		/*suppose the value of k is s which is -2 for taking the stars */
		for (k=s; k>=0; k--) {
			printf("*");
		}
		/*for printing the E for 2 times*/
		if(i>='E'){
			j='E';
		}else{
			j=i;/*after printing E for the 2 times the loop will be running through else*/
		}
		/*the value of j have to greater than equal to A and it will be decrement*/
		for (; j>='A'; j--) {
			printf("%c",j);
			
		}	
		 s++ ;/*for increment the value of s*/
		
		
		printf("\n");/*for the next row*/
	}
	return 0;
}
	
