#include<stdio.h>
main()
{
	int n,temp,s,p=0;
	printf("enter value of n= ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		s=n%10;
		p=p*10+s;
		n=n/10;
	}	
	printf("reverse=%d",p);
	if(temp==p)
	{
		printf("number is palindrom\n");
	}
	else
	{
		printf("number is not palindrom\n");
	}
}