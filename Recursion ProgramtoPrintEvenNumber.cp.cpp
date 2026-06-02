#include<stdio.h>
void printP(int n);
int main()
{
 int x;
 printf("enter the number:");
 scanf("%d",&x);
 printP(x);
 return 0;
}
void printP(int n)
{
 if(n>0)
 {
  printP(n-1);
  printf("%d\t",2*n);
 }
}