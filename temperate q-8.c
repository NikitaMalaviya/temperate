#include<stdio.h>
main()
{
	int i,no;
	printf("enter the no: ");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		if(no%2==0)
		break;
	}
	if(i==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime");
	}
}