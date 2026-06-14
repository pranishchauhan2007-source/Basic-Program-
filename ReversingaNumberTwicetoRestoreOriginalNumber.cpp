#include<iostream>
using namespace std;

int main()
{
int rem,n=43705,k=0, sum=0;
while (n>0)
{
rem=n%10;
k=k*10+rem;
n=n/10;
}
while(k>0)
{
rem=k%10;
sum=sum*10+rem;
k=k/10;
}
cout<<sum<<endl;
}
