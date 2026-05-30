#include<stdio.h>
int main()
{
    int a,c,b=0;
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    c=n;
    while(c!=0)
    {
    a=c%10;
    b=b+a*a*a;
    c=c/10;
    }
    if(b==n)
        printf("Armstrong Number");
        else
        printf("No Armstrong Number ");
        return 0;
}