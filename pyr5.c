#include<stdio.h>
int main(){
int i,j,n=6;
int k,s=-2;	

for (i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=5;j>=i;--j){
			printf("*");
		}
		
		
		
		for (k=s; k>=0; k--) {
			printf("*");
		}
		
		if(i>=5){
			j=5;
		}else{
			j=i;
		}
		
		for (; j>=1; j--) {
			printf("%d",j);
			
		}	
		 s++ ;
		
		
		printf("\n");
	}
	return 0;
}
	
