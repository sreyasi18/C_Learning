#include<stdio.h>
int main()
{

	int i,j,k,n=6;

	for (i=6;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf(" ");
			}
			for(k=5;k>=i;--k)
			{
				printf("*");
			}
			
	
			printf("\n");
		}
		return 0;
}
