#include<stdio.h>
#include<math.h>
int power();
int main()
{
	int a,b,num;
	printf("enter integer values for a and b:\n");
	scanf("%d %d",&a,&b);
	int pow=power(a,b);
	printf("%d to the power of %d is %d \n",a,b,pow);

	return 0;
}

int power(a,b){
	
	int count,res=1;
	for(count=1;count<=b;count++)
	{
		res=res*a;
	}
	return(res);
	
}
