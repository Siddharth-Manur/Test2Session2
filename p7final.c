#include<stdio.h>
#include<math.h>
struct _point{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("Enter the point\n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  l.p1=input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt(pow((l->p1.x-l->p2.x),2)+ pow((l->p1.y-l->p2.y),2));
}
void output(Line l)
{
  printf("The length of the line is %f",l.distance);
}
int main()
{
  Line y;
  y=input_line();
  find_length(&y);
  output(y);
  return 0;
}