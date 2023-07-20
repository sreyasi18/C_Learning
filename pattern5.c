/*wap to print:
	ABCDCBA
	ABC CBA
	AB   BA
	A     A
     */


#include<stdio.h>
int main()
{

	int i,j,k,l,m,n=6;/*let row is 6*/

	for (i=6;i>=1;i--)/*for work the loop for 6 times*/
		{
			for(j=1;j<=i;j++)/*space for 6 times */
			{
				printf("%d",j);
			}
			for(k=5;k>=i;--k)/*1st portion star */
			{
				printf(" ");
			}
			
 			for(m=4;m>=i;m--)
			{
				printf(" ");
			} 
			
			
			for(l=i;l>=1;l--)
			{
				if(l==6){
					continue;
				}else{
					printf("%d",l);
				}
				
			}

			printf("\n");
		}
		return 0;
}







