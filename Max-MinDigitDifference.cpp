#include<iostream>
using namespace std;

int main()
{
   int rem,n,k=0,l=9;
   cin>>n;
     while (n>0)
     {
       rem=n%10;
       if(k<rem)
       k=rem;
       
       if(l>rem)
       l=rem;
       n=n/10;
       }
        cout<<k-l<<endl;
    return 0;
}