#include<stdio.h>
int main(){
	int i,j,k;
	int x[4][3]={
					{2,3,4},
					{3,6,8},
					{5,8,9},
					{2,7,5}
				};

	printf("Enter array elements\n");
	
/*	for(i=0;i<4;i++)
	{
		scanf("%d",&x[i][0]);
		scanf("%d",&x[i][1]);
		scanf("%d",&x[i][2]);
	}*/
	for (i=0;i<4;i++)
	{
		printf("%d ",x[i][0]);
		printf("%d ",x[i][1]);
		printf("%d ",x[i][2]);
		printf("\n");
	}
	
	return 0;
}
