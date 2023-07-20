#include<stdio.h>   
int add_rec(int);  
  int main()  
{  
    int num;  
    printf("Enter a 5-digit positive integer number\n");  
    scanf("%d", &num);  
  
 
    printf("Sum of Digits: %d\n", add_rec(num)); /*using recursion*/ 
    return 0;  
}  

int add_rec(int num)  
{  
    if(num)  
        return( (num % 10) + add_rec(num / 10) );  /*call the add_rec function*/
    else  
        return 0;  
}  
