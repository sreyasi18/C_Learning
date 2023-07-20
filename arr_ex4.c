#include<stdio.h>
int main(){
	int arr[25],i,pos=0,neg=0,odd=0,even=0,zero=0;
	for(i=0;i<25;i++)
	{
		printf("enter the number: ");
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<25;i++)
	{
		if(arr[i]==0)
		zero++;
		
		if(arr[i]>0)
		pos++;
		
		if(arr[i]<0)
		neg++;
		
		if(arr[i]%2==0)
		even++;
		
		if(arr[i]%2!=0)
		odd++;
	}
	printf("enterd number is %d zero,%d positive,%d negative,%d even,%d odd",zero,pos,neg,even,odd);
	return 0;
	
}
