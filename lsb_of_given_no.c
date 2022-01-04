#include<stdio.h>
main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if(num%2==1)
	printf("the lsb is 1");
	else
	printf("the lsb is 0");
}
