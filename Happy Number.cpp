#include<iostream>
using namespace std;

int main()
{
    int n,rem;
    cin>>n;
    while(n>9)
     {
    int sum=0;
    while (n>0)
    {
       rem=n%10;
       sum=sum+ rem*rem;
       n/=10;
    }
    n=sum;
    }
    if(n==1)
    cout<<"Happy Number";
    else if(n==4)
    cout<<"Not Happy Number";
}