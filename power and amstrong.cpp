#include <stdio.h>
int temp;
int square(int);
int check2(int);
int square(int x)

    {
	x=x*x;
    printf("%d",x);                           
}

main()
{
   int n;
   scanf("%d",&n);
   
   square(n);
}
    

int check2(int n)
{

	scanf("%d",&n);
	temp=n;
}
main()
{
	int n,c,r,temp=0,sum=0;
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
	
    return temp==sum;
}



