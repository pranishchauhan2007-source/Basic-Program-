#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem,count=0;
    int end,digit,start;
    cout<<"enter the num:";
    cin>>n;
    cout<<"enter the digit:";
    cin>>digit;
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
    cout<<"yes";
  else
  cout<<"no";
  }