#include<stdio.h>
int main()
{
	int n,p=0,check,rem;
	scanf("%d",&n);
	check=n;
	while(n!=0)
	{
		rem=n%10;
		p=p*10+rem;
		n=n/10;
	}
	if(check==p)
	{
			printf("palin");
	}

	else
	{
		printf("not");
	}
	
}
