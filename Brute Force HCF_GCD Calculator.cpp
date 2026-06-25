#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 int h;
 cout<<"enter the three numbers";
 cin>>a>>b>>c;
 for(h=a*b*c;h>=1;h--)
 {
 if(a%h==0 && b%h==0 && c%h==0)
 {
 break;
 }
 }
 cout<<h<<endl;
}