#include<stdio.h>
int prime(int num);
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    prime(num);
}
int prime(num)
{
	
	int a=2;
	for (a=2;a<=num;a++)
	{
		if (num%a==0)
		{
			printf("%d\n",a);
			num=num/a;
			a--;
		
		}
	}
	return 0;
}
