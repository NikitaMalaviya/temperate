#include<stdio.h>
main()
{
	int i=1, m,ans=1;
	printf("enter your value= ");
	scanf("%d",&m);
	while(i<=10)
	{
		ans=m*i;
		printf("%d*%d=%d\n",m,i,ans);
		i++;
	}
}