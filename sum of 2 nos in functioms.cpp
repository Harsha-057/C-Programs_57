#include<stdio.h>
int a,b,c,s;
int sum (int x,int y)
{
	c=x+y;
    return c;
}

main()
{
   int a,b;
   
   printf("Enter the numbers : ");
   scanf("%d%d",&a,&b);
   s=sum(a,b);
   printf("sum = %d",s);
}

