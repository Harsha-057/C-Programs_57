#include<stdio.h>
int main()
{
	int n,c,r,temp=0,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("amsrong");
	}
	else
	{
		printf("not");
		
	}
	
	
}		
