#include<stdio.h>
int main(){
int i,j,n=6;	

for (i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=5;j>=i;--j){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
	
