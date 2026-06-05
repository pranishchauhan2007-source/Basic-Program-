#include<stdio.h>
#include<math.h>
int main ()
{
int n,x;
printf("enter the number:");
scanf("%d",&n);
x=sqrt(n);
if(x*x==n)
{
printf("true");
}
else
{
printf("false");
}
return 0;
}