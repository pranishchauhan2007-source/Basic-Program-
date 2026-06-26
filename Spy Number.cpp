#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0,pro=1;
    cin>>n;
    while(n>0)
    {
    rem=n%10;
    sum=sum+rem;
    pro=pro*rem;
    n/=10;
    }
    if(sum==pro)
    cout<<"yes";
    else
    cout<<"no";
    
}