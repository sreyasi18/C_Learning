#include <stdio.h>

void main() {
	int i,j,k,s=-2;

	for (i=6; i>=1; i--) {
		
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
}
	
