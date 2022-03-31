#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
 for(int i=2;i<=n;i++)
   {
     a[i]=i;
   }
}
void erotosthenes_seive(int n,int a[n])
{
  for(int i=2;i<sqrt(n);i++)
    {
     for(int j=i+i;j<=n+2;j=j+i)
     {
      a[j]=0;
     }    
    }
}
void output(int n,int a[n])
{
  printf("The prime numbers upto %d are ",n);
 {
  for(int i=2;i<n;i++)
  {
      printf("%d ",a[i]);
  }
 }
}
int main()
{
  int x;
  x=input_array_size();
  int a[x];
  init_array(x,a);
  erotosthenes_seive(x,a);
  output(x,a);  
}