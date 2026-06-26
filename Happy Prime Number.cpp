#include<iostream>
using namespace std;

int main()
{
    int n,rem;
    cin>>n;
    int num= n;
    while(num>9)
     {
    int sum=0;
    while (num>0)
    {
       rem=num%10;
       sum=sum+ rem*rem;
       num/=10;
    }
    num=sum;
    }
    if(num==1)
    {
    int I;
    for( I=2;I<n;I++)
    {
    if(n%I==0)
    break;
    }
    if(I==n)
    cout<<"prime";
    else
    cout<<"not prime";
    }
    
}