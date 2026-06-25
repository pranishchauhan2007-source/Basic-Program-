#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 int l,i;
 cout<<"enter the three numbers";
 cin>>a>>b>>c;
 for(l=1;l<=a*b*c;l++)
 {
 if(l%a==0 && l%b==0 && l%c==0)
 {
 break;
 }
 }
 cout<<l<<endl;
}