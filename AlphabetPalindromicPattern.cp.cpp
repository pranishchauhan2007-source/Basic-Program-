#include<stdio.h>
int main()
{
int i,j,n;
char k;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
k='A';
for(j=1;j<=2*n-1;j++)
{
if(j<=n+1-i||j>=n-1+i)
{
printf("%c",k);
if(j<n)
k++;
else
k--;
}
else
{
printf(" ");
if(j==n)
k--;
}
}
printf("\n");
}
return 0;
}