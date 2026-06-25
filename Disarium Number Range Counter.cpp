#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem,count=0;
    int end,digit,start;
    cout<<"enter the start:";
    cin>>start;
    cout<<"enter the end:";
    cin>>end;
    cout<<"enter the digit:";
    cin>>digit;
    for(n=start;n<=end;n++)
    {
    int sum =0;
    int temp=n;
    int d=digit;
    while(temp>0)
    {
    rem=temp%10;
    temp/=10;
    
    sum=sum+(int)pow(rem,d);
    d--;
    }
    if(sum==n)
    count++;
  }
  cout<<count;
  }