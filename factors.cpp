#include<stdio.h>
int main()
{
	int i,a,n;
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		if(a%i==0)
		{
			printf("%d\n",i);
		}
	}
}
