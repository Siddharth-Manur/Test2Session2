#include<stdio.h>
#include<string.h>
void input_string(char *a,char *b)
{ 
  printf("Enter the string\n");
  scanf("%s",a);
  printf("Enter the substring\n");
  scanf("%s",b);
}
int str_reverse(char *a,char *b)
{
 int index=0;
 for(int i=0;i<strlen(a);i++)
   {
    for(int j=0;j<strlen(b);j++)
    {
    if(a[i+j]==b[j])
     {
       index = index+1;
     }
    else
     {
       index=0;
     }
    }
     if(index==strlen(b))
     {
       return i;
     }
   }
  return index;
}
void output(char *a, char *b,int index)
{
 printf("%d",index);
}
int main()
{
 int x;
 char a[50],b[50];
 input_string(a,b);
 x=str_reverse(a,b);
 output(a,b,x);
}