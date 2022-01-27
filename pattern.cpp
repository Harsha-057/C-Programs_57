#include<stdio.h>
int main()
{
	int i,c;
	for(i=1;i<=5;i++)
	{
		for(c=1;c<=i;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
