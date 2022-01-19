#include <stdio.h>

int odd_even(int);

int main()
{
   int n,result;

   printf("Enter n : ");
   scanf("%d", &n);

   result=odd_even(n);
    if(result=1)
    printf("even");
    else
    printf("odd");
}

int odd_even(int n)
{
  if (n%2 == 0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
