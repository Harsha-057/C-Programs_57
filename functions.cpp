#include <stdio.h>
void check1(void);
void check2(void);
void check1()
 {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
}
void check2()
{
	int num;
	 scanf("%d", &num);
    

    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    
}
int main()
{
	check1();
	check2();
	return 0;
}
