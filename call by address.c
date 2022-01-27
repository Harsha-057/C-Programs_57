#include<stdio.h>
int swap(int*a,int*b);
int main()
{int a,b;
printf("enter two numbers:");
scanf("%d%a",&a,&b);
printf("before swapping the numbers:%d%d",a,b);
swap(&a,&b);
printf("after swapping the numbers:a=%d,a=%d,a,b");

return 0;
}
int swap (int*a,int*b)
{
	int x;
	x = *a;
    *a = *b;
	*b = x;
}
