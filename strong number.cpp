#include<stdio.h>
main()
{
	int n,i=1,r,sum=0,fact=1,temp=0;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		i=1,fact=1;
		r=n%10;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	{
		if(sum==temp)
		printf("it is strong");
		else
		printf("it is not strong");
	}
}
