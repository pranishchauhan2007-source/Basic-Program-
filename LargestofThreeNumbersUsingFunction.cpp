#include<stdio.h>
void checklargest(int,int,int);
int main()
{
  int a,b,c;
  printf("enter three numbers:\n");
  scanf("%d%d%d",&a,&b,&c);
  checklargest(a,b,c);
}
void checklargest(int a,int b,int c)
{
  if(a>=b && a>=c)
  {
    printf("a is greater");
  }
  else if(b>=a && b>=c)
  {
    printf("b is greater");
  }
  else
  {
    printf("c is greater");
  }
}