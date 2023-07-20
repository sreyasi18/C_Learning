#include<stdio.h>
int rec_sum(int num);
int main()
{
    int n;

    printf("Enter Range: ");
    scanf("%d", &n);
   /*recursive function*/
    printf("Sum of first %d numbers is: %d\n",n, rec_sum(n));
    return 0;
}

int rec_sum(int num)
{
    while(num)
    {
        return (num+sum(num-1));
    }
}
