#include<stdio.h>
int sum(int num);
int main()
{
    int n;
    printf("Enter Range: ");
    scanf("%d", &n);

    /*without recursive*/
    printf(" Sum of first %d numbers is: %d\n",n, sum(n));
    
}
/* This function is for non recursion*/
int sum(int num)
{
    int res=0;
    while(num!=0) 
    {
        res = res + num;
        num = num-1;
    }
    return res;
}


