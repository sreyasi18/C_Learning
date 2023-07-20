#include<stdio.h>
int main(){
	int res=1,prev=0,after=1,num;
	printf("enter number:");
	scanf("%d",&num);
	printf("%d %d\n",prev,res);
	for (;res<=num;)
	{
		res=prev+res;
		if(res<=num){
			printf("%d\n",res);
			prev=after ;
			after=res;
		}	
	}
 
	return 0;
}
