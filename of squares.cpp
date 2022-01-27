#include<stdio.h>
main()
{
	int n,c,r,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n>0);
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(temp==sum)
	printf("%d",sum);
	else
	printf("%d",sum);
}
