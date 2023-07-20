#include<stdio.h>
#include<conio.h>
int main (){
int ram,shyam,ajay;
printf("Enter the age os Ram:");
scanf("%d",&ram);
printf("Enter the age of Shyam:");
scanf("%d",&shyam);
printf("Enter the age of Ajay:");
scanf("%d",&ajay);

if(ram<=shyam)
{
	if(ram<=ajay)
	{
		printf("Ram is the youngest");
	}
	else
	{
		printf("Ajay is the youngest");
	}
}
else if(shyam<=ajay)
{
	if(shyam<=ajay)
	{
		printf("shyam is the youngest");
	}
	else
	{
		printf("ajay is the youngest");
	}
	return 0;
}
}
