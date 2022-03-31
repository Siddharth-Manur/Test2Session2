#include<stdio.h>
#include<math.h>
int input_number()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<sqrt(n);i++)
    {
      if(n%i==0)
      {
        return(0);
      }
    }
  return 1;
}
void output(int n, int is_prime)
{ 
  if(is_prime==0)
  {
    printf("The number is not a prime");
  }
  else
  {
    printf("The number is prime");
  }
}
int main()
{
  int x,y;
  x=input_number();
  y=is_prime(x);
  output(x,y);
  return 0;
}
