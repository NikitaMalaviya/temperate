#include<stdio.h>
main()
{
	int a=1,m,n;
	n=a=1;
	printf("enter the value of m= ");
	scanf("%d",&m);
	for(a=1;a<=m;a++)
	{
		n=n*a;
	}
	printf("factorial=%d",n);
}