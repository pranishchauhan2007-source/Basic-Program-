#include<iostream>
using namespace std;

int main()
{
   int rem,n,k=0,sum=0;
   cin>>n;
     while (n>0)
     {
       rem=n%10;
       sum=sum*10+rem;
       n=n/10;
       
       k++;
       }
        cout<<k<<endl;
    return 0;
}