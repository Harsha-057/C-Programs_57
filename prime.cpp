#include<stdio.h>
int main()
{
	int i,n,p=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			p=p+1;
		}
	}
		if(p==2)
		{
			printf("prime");
		}
		else
		{
			printf("composite");
		}
	
}
