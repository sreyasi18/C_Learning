#include<stdio.h>
int main(){
	int array[6]={5,3,2,4,1,6};
	int *i, *j;
	printf("value of the 2nd element is %d\n",array[1]);
	printf("value of the 4th element is %d\n",array[3]);
	
	i=&array[1];
	j=&array[3];
	int sub=*j-*i;
	printf("sub is %d",sub);
	return 0;
}
