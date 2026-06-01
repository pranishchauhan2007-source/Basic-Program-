#include<stdio.h>
int main()
{
int  n=5656,digit,tem=0,sum=0;
while(n>0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
   int add=0,rem;
   tem=sum;
    while(tem>0)
    {
    rem=tem%10;
    add=add*10+rem;
    tem/=10;
    }
    if(add==sum)
      printf("yes");
    else
   
      printf("no");
      }
      