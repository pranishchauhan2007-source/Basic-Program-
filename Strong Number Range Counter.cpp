#include<iostream>
using namespace std;
int main()
{
    int n,rem,i,count=0;
    int end;
    cin>>end;
    for(n=1;n<=end;n++)
    {
    int sum =0;
    int temp=n;
    while(temp>0)
    {
    int fact=1;
    rem=temp%10;
    for(i=rem;i>=1;i--)
    fact=fact*i;
    
    sum=sum+fact;
    temp/=10;
    }
    if(sum==n)
    count++;
  }
  cout<<count;
  }