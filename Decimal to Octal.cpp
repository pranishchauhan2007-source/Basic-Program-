#include<iostream>
using namespace std;
int main()
{
 int a,rem,sum=0,pro=1;
 cout <<"enter the number";
 cin>>a;
 while (a>0)
 { 
 rem=a%8;
 sum=sum+pro*rem;
 pro*=10;
 a/=8;
 }
 cout<<sum;
}
