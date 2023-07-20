#include<stdio.h>
int main(){
	int i;
	int num;
    int	array[5];
    printf("enter the numbers:");
   
	for(i=0;i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("%d\n",array[i]);
		printf("%d\n",*(&array[i]));
		printf("%d\n",*(array+i))
	}
	return 0;
}
