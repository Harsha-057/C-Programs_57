#include <stdio.h>
int check1(int);
int check2(int);
int check1()
 {
    	int i,n,f=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
    
}
int check2()
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
int main()
{
	check1();
	check2();
	return 0;
}
