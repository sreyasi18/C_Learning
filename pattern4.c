/*wap to print:
	ABCDCBA
	ABC CBA
	AB   BA
	A     A
     */


#include<stdio.h>
int main()
{

	int i,j,k,l,n=6;/*let row is 6*/

	for (i=6;i>=1;i--)/*for work the loop for 6 times*/
		{
			for(j=1;j<=i;j++)/*space for 6 times */
			{
				printf("*");
			}
			for(k=5;k>=i;--k)/*1st portion star */
			{
				printf(" ");
			}
			
 			for(j=6;j>=i;j--)/*2nd portion star*/
			{
				printf(" ");
			}
			for(l=1;l<=i;l++)
			{
				printf("*");
			}
	
			
	
			printf("\n");
		}
		return 0;
}
