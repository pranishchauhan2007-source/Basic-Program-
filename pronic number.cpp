#include<iostream>
using namespace std;

int main()
{
    int n,i,rem;
    cin>>n;
    for(int i = 0; i <= n; i++)
    {
     if(n==i*(i+1))
     {
     cout << i<<" "<<i+1;
     return 0;
     }
     }
    
    
    cout<<"no";
}