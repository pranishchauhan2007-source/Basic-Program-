#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0,i,j;
    cin>>n;
    int tem=n;
    while(tem>0)
    {
    rem=tem%10;
    sum=sum*10+rem;
    tem/=10;
    }
    for( i=2;i<=sum;i++)
    {
    if(sum%i==0)
    break;
    }
    for( j=2;j<=n;j++)
    {
    if(n%j==0)
    break;
    }
    if(i==sum && j==n)
    cout<<"prime ";
    else 
    cout<<"not prime ";
    
}