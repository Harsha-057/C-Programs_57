#include<stdio.h>
main()
{
	int i,s,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<n-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
