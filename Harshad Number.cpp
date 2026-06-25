#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0;
    cin>>n;
    while(n>0)
    {
    rem=n%10;
    sum=sum+rem;
    n/=10;
    }
    if(n%sum==0)
    cout<<"Harshad number";
    else
    cout<<"Not Harshad number";
}