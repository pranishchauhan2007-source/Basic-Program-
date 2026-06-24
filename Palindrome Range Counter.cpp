#include<iostream>
using namespace std;

int main()
{
    int start,end;
    int n,count=0;
    cin>>start>>end;
    for(n=start;n<=end; n++)
    {
    int temp=n;
    int rem, sum=0;
    while (temp>0)
    {
    
    rem=temp%10;
    sum=sum*10+rem;
    temp/=10;
    }
    if(sum==n)
    count++;
    }
    cout <<count;
    return 0;
}