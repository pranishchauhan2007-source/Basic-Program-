#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0,i;
    cin>>n;
    int a=n;
    while(n>0)
    {
    int temp=1;
    rem=n%10;
    for(i=rem;i>=1;i--)
    temp=temp*i;
    
    sum=sum+temp;
    n/=10;
    }
    if(sum==a)
    cout<<"yes";
    
    else
  cout<<"no";
  }