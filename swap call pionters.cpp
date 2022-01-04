#include <stdio.h>
void swap(int*,int* );
int main()
{
	int a=5;
	int b=4;
	printf("%d%d",a,b);
	swap(&a,&b);
	printf("%d%d",a,b);
	
}
void swap (int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d%d",*a,*b);
}
