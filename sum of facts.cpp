#include<stdio.h>
main()
{
	int a,b,fact=1,sum=0;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		fact=fact*b;
		sum=sum+fact;
	}
	printf("%d",sum);
}
