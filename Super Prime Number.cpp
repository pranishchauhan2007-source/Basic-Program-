#include<iostream>
using namespace std;

int main()
{
    int n,end;
    cin>>n;
    int I,j,k,count=0;
    for(j=1;j<=n;j++)
    {
    for( I=2;I<j;I++)
    {
    if(j%I==0)
    break;
    }
    if(I==j)
    count++;
    }
    for( k=2;k<count;k++)
    {
    if(count%k==0)
    break;
    }
    if(k==count)
    cout<<"prime ";
    else
    cout<<"not prime";
    
}