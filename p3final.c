#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter the values of a,b\n");
  scanf("%d%d",a,b);
}
int add(int a,int b, int sum)
{
  sum=a+b;
  return sum;
}
void output(int *a,int *b,int *sum)
{
  printf("the sum of two numbers = %d+%d = %d",*a,*b,*sum);
}
int main()
{
  int a,b,sum; 
  input(&a,&b);
  sum=add(a,b,sum);
  output(&a,&b,&sum);
  return 0;
  }
