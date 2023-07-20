#include<stdio.h>
void func(int arr[]);
int main()
{
	int i;
	int arr[5]={2,4,6,8,10};
    func(arr);
  /*  func(&arr[0]);*/
	return 0;
}
void func(int arr[])
	{
		int i;
		for (i=0;i<5;i++)
		{
			printf("%d\n",*(arr+i));
		}
		
	}

/*void func(int *a)
	{
		
		int i;
		for (i=0;i<5;i++)
		{
			printf("%d\n",*a);
			a++;
		}
		
	}*/
