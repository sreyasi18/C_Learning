#include<stdio.h>
int main() {
int arr[10];
int i;
int sum=0,avg=0;
 
printf("\n Enter 10 numbers : \n");
 
 for(i = 0; i<10;i++) {
     
      printf("Enter no. %d   : \n",i+1);
      scanf("%d",&arr[i]);
         
 }
 
 for(i = 0; i<10;i++) {
           
         sum = sum + arr[i];   
}

 avg = sum/10;
 printf("Average : %d",avg);

 }
