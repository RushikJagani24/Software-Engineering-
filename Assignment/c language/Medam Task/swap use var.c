#include<stdio.h>
main()
{	
	int a=10,b=20,c;
	printf("Old swap a=%d,b=%d",a,b);
	c=a+b;
	a=c-a;
	b=c-a;
	printf("\nnew swap a=%d,b=%d",a,b);
	
	
}
