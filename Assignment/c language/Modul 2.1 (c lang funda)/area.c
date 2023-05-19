#include<stdio.h>
main(){
 	float r,circle,l,w,rectangle,h,b,triangle;
	 printf("\nCIRCLE AREA.....");
	 printf("\nEnter the range;");
	 scanf("%f",&r);
	 circle=3.14*r*r;
	 printf("Circle=%.2f",circle);
	 	

	 printf("\n\nRECTANGLE AREA.....");	
	 printf("\nEnter the length:");
	 scanf("%f",&l);
	 printf("Enter the width:");
	 scanf("%f",&w);
	 rectangle=l*w;
	 printf("Rectangle=%.2f",rectangle);
	 

	 printf("\n\nTRINGLE AREA.....");
	 printf("\nEnter the base:");
	 scanf("%f",&b);
	 printf("Enter the height");
	 scanf("%f",&h);
	 triangle=b*h/2;
	 printf("Triangle=%.2f",triangle);
	 
	 
	 



}
