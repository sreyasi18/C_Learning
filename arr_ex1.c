#include<stdio.h>
int main(){
	int arr[25],a,i,count=0;
	for(i=0;i<25;i++)
	{
		printf("enter the number:");
		scanf("%d",&arr[i]);
		
	}
	printf("enter the number you want to search:");
	scanf("%d",&a);
	
	for(i=0;i<25;i++)
	{
		if(arr[i]==a)
		count++;
	}
	printf("the number %d is present for %d times",a,count);
	return 0;
}
