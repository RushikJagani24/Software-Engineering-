#include<stdio.h>
main()
{
		int a,b,add,sub,mul,div,modul;
		printf("Enter A:");
		scanf("%d",&a);
		printf("Enter B:");
		scanf("%d",&b);
		add=a+b;
		printf("\nAddition=%d",add);
		sub=a-b;
		printf("\nSubstraction=%d",sub);
		mul=a*b;
		printf("\nMultiply=%d",mul);
		div=a/b;
		printf("\nDivided=%d",div);
		modul=a%b;
		printf("\nModul=%d",modul);

}
