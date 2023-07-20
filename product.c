#include<stdio.h>
float product(float i,int j)
{ 
	float pr;
	pr=i*j;
	return (pr);
}
int main(){
	float a,p;
	int b;
	printf("enter the two values to find the product (float X int):");
	scanf("%f,%d",&a,&b);
	
	p=product(a,b);
	printf("the product is %f\n",p);
	return 0;
}
