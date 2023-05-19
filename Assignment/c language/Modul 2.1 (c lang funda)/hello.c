#include<stdio.h>
main()
{
	int a,b,add,sub,mul,div;
	printf("Enter the value of A & B:");
	scanf("%d \n%d",&a,&b);
	add=a+b;
	printf("\nAddition=%d",add);
	sub=a-b;
	printf("\nSubtraction=%d",sub);
	mul=a*b;
	printf("\nMultiply=%d",mul);
	div=a/b;
	printf("\nDivided=%d",div);
}
