#include <stdio.h>
int main()
{
int n = 99999991, rem, sum;
 while (n > 9)  
{
  sum = 0;
while (n > 0)
 {
   rem = n % 10;
   sum = sum + rem;
   n = n / 10;
 }
   n = sum;
  }
 printf("%d", n);
  return 0;
}