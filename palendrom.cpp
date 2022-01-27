#include<stdio.h>
main()
{
	int n,sum=0,rem,temp=0;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("it is palendrom");
	}
	else
	printf("not");
}
