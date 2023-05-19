#include<stdio.h>
main()
{	
	int a=10,b=20;
	printf("\nOld swap a=%d  b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nNew swap a=%d  b=%d",a,b);
	
}
