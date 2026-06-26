#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0,pro=1;
    cin>>n;
    int sq=n*n;
    while(sq>0)
    {
    rem=sq%10;
    sum=sum+rem;
    sq/=10;
    }
    if(sum==n)
    cout<<"yes";
    else
    cout<<"no";
    
}