#include<stdio.h>
main()
{
	int m,count=0;
	printf("enter value of count= ");
	scanf("%d",&m);
	while(m!=0)
	{
		m=m/10;
		count++;
	}
	printf("%d",count);
}