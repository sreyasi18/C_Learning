#include<stdio.h>
main(){
	float km,m,cm,f,in;
	printf("Enter distance in kilometers:");
	scanf("%f",&km);
	/*calculate the conversion */
	m=km*1000;
	cm=km*1000*100;
	f=km*3280.84;
	in=km*39370.08;
	printf("The Distance in feet:%f\n",f);
	printf("The Distance in inches:%f\n",in);
	printf("The Distance in meters:%f\n",m);
	printf("The Distance in centimeters:%f\n",cm);
	//return 0;
}
