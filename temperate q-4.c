#include<stdio.h>
main()
{
	int n,sum,First,Last;
	sum=0;
	printf("enter value of= ");
	scanf("%d",&n);
	Last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	First=n;
	sum=Last+First;
	printf("%d",sum);
}