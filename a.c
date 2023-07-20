#include<stdio.h>
/*int main(){
	char c;
	for(c='a';c<='z';c++)
	printf("%c",c);
	return 0;
}/*

/*wap to print:
	ABCDEFEDCBA
	ABCDE EDCBA
	ABCD   DCBA
	ABC     CBA
	AB       BA
	A         A
     */


int main()
{

	char i,j,k,l,m,n='F';/*let row is 6*/

	for (i='F';i>='A';i--)/*for work the loop for 6 times*/
		{
			for(j='A';j<=i;j++)/*space for 6 times */
			{
				printf("%c",j);
			}
			for(k='E';k>=i;--k)/*1st portion star */
			{
				printf(" ");
			}
			
 			for(m='D';m>=i;m--)
			{
				printf(" ");
			} 
			
			
			for(l=i;l>='A';l--)
			{
				if(l=='F'){
					continue;
				}else{
					printf("%c",l);
				}
				
			}

			printf("\n");
		}
		return 0;
}
