#include<stdio.h>
#include<math.h>
main()
{
	int d_num,b_num,r,i=0;
	scanf("%d",&d_num);
	while(d_num!=0)
	{
		r=d_num%2;
		b_num=b_num+r*pow(10,i);
		d_num=d_num/2;
		i++;
	}
	printf("%d",b_num);
}
