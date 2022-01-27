#include<stdio.h>
int main()
{
	int i,fact,r,sum,n,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		i=1;fact=1;
		r=n%10;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("strong");
	}
	else
	{
		printf("not");
	}
	
}
