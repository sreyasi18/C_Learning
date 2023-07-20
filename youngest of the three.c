#include<stdio.h>
#include<conio.h>
int main (){
int ram,shyam,ajay;
printf("Enter the age of Ram:");
scanf("%d",&ram);
printf("Enter the age of Shyam:");
scanf("%d",&shyam);
printf("Enter the age of Ajay:");
scanf("%d",&ajay);

if (ram<=shyam)
{
if(ram<=ajay)
{
	printf("Ram is the youngest.");
}
else
{
	printf("Ajay is the youngest.");
}
}
else if("shyam<=ajay")
{
printf("Shyam is the youngest.");
}
else
{
printf("Ajay is the youngest.");
}
return 0;
}
