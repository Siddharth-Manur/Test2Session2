#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the for x1,x2,y1,y2");
  scanf("%f %f %f %f",x1,x2,y1,y2);
}
float my_sqrt(float n)
{
  float a=2;
  float b;
  b=0.5 * (a +(n/a));
  while( fabs(a-b) > 0.000001)
  {
     a = b;
    b = 0.5 * (a +(n/a));
  }
  return b;
}
void find_distance(float x1,float y1,float x2,float y2,float *distance)
{ 
  *distance = my_sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1,float y1,float x2,float y2,float distance)
{
  printf("the distance between %0.2f,%0.2fand %0.2f,%0.2f is %0.2f",x1,y1,x2,y2,distance);
}
int main()
{
  float a,b,c,d,e;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&e);
  output(a,b,c,d,e);
}

