#include<stdio.h>
#include<conio.h>
int main(){
	float l,b,r,ca,cc,ra,rp;
	//for rectangle
	printf("enter the length of the rectangle:");
	scanf("%f",&l);
	printf("enter the nreadth of rectangle:");
	scanf("%f",&b);
	
	//for circle
	printf("enter the radius of circle:");
	scanf("%f",&r);
	
	//calculate area & perimeter of the rectangle
	ra=l*b; //area of rectangle =length X breadth
	rp=2*(l+b); //perimeter of rectangle=2X(length+breadth)
	
	//calculate area & circumference of the circle
	ca=3.14*r*r; //area of circle=2xpixr^2
	cc=2*3.14*r; //circumference of circle=2xpixr
	
	printf("\nThe area of the rectangle :%0.2f",ra);
	printf("\nThe perimeter of the rectangle :%.2f",rp);
	printf("\nThe area of the circle:",ca);
	printf("\nThe circumference of the circle:%.2f",cc);
	return 0;
}
