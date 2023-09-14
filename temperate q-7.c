#include<stdio.h>
main()
{
	int a=0,b=1,c,n,i;
	printf("\n enter the no: ");
	scanf("%d",&n);
	printf("fibo series: ");
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}