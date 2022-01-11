#include<stdio.h>

int factorial (int);

main()
{
    int n;
    
    printf("n");
    scanf("%d",&n);
    
    printf("the factorial of the %d is %d",n,factorial(n));
}

int factorial (int x)
{
    	int i,n,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
    return(f);
}


