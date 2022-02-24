#include<stdio.h>
int input()
{
  int n;
  printf("Enter the nth number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int n1=0;
  int n2=1;
  int fibo;
  if(n==1)
  {
    return 0; 
  }
  else if(n==2)
  {
    return 1;
  }
  else
  {
  for(int i=2;i<n;i++)
    {      
      fibo=n1+n2;
      n1=n2;
      n2=fibo;
    }
    return fibo;
  }
}
void output(int n,int fibo)
{
  if(n==1)
  {
    printf("The 1st Fibonacci number is 0");
  }
  else if(n==2)
  {
    printf("The 2nd Fibonacci Number is 1");
  }
  else
 {
  printf("The %dth Fibonacci number is %d",n,fibo);
 }
}
int main()
{
  int x,y;
  x=input();
  y=find_fibo(x);
  output(x,y);
}
