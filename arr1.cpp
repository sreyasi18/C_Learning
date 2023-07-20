#include<stdio.h>
int main(){
	int x[5][3]={{2,3,4},{3,4,5},{4,5,6},{5,6,7},{6,7,8}};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("element at x[%i][%i]:",i,j);
			printf("%d\n",x[i][j]);
			
		}
	}
	return 0;
}
