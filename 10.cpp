#include<stdio.h>

int diff(int b,int a)

{

  int difference;

  difference=b-a;

  return difference;

}

int main()

{

  int a=10,b=20,res;

  res=diff(a,b);

  printf("%d",res);

}

