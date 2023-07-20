#include<stdio.h>  
  
int add(int num);    
  
int main()  
{  
    int num;  
  
    printf("Enter a 5-digit positive integer number\n");  
    scanf("%d", &num);  
  
    printf("Sum of Digits: %d\n", add(num));  /*without using recursion*/
   
    return 0;  
}  
  
int add(int num)  
{  
    int sum = 0;  
  
    while(num)  
    {  
        sum = sum + (num % 10);  
        num = num / 10;  
    }  
  
    return(sum);  
}  
