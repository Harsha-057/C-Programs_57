#include<stdio.h>
main()
{
	float num1,num2,sum,sub,div,mul;
	char c;
	scanf("%c",&c);
	scanf("%f%f",&num1,&num2);
	switch(c)
	{
		case'+': 
		sum=num1+num2;
		printf("%f",sum);
		break;
		case'-':
			sub=num1-num2;
			printf("%f",sub);
	    break;
	    case'*':
	    	mul=num1*num2;
	    	printf("%f",mul);
	    	break;
	    	case'/':
	    		div=num1/num2;
	    		printf("%f",div);
	    		
	    		deafault:
	    			printf("wrong operation");
	}
}
