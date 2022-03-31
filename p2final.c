#include<stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("enter the values for (x1,y1),(x2,y2),(x3,y3)\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  float istriangle;
  istriangle = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y3));
  return istriangle;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle==0)
  {
    printf("The points do not  form a triangle\n");
  } 
  else
  {
    printf("The points form a triangle\n");
  }
}
int main()
{
  float a,b,c,d,e,f,x;
  input_triangle(&a,&b,&c,&d,&e,&f);
  x=is_triangle(a,b,c,d,e,f);
  output(a,b,c,d,e,f,x);
  return 0;
}
