#include<stdio.h>
int main()
{
	int i,s,a;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<5-i;s++)
		{
			printf(" ");
		}
		for(a=1;a<=i;a++)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
	return 0;
}
