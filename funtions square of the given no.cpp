#include<stdio.h>

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

