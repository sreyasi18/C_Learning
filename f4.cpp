#include<stdio.h>
int check (int);
int multiply;
int main()
{
	int i=45,c;
	int multiply;
	c=multiply(i*1000);
	printf("%d\n",c);
	return 0;
}
int check ( int ch )
{
	if (ch >=40000)
	return (ch/10);
	else
	return (10);
}
