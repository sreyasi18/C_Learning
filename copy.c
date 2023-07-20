#include<stdio.h>
int main(){
	int ar1[5]={10,20,30,40,50},ar2[5],i;

	/*for copying*/
	for(i=4;i>=0;i--)
	ar2[i]=ar1[4-i];
   	/*for display*/	
	for(i=0;i<=4;i++)
	printf("copies:%d\n",ar2[i]);
	return 0;
}
