#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    x=n*(n+1)/2;
        for(int i=1;i*i<=x;i++)
            {
                if(i*i==x)
                {
                    cout<< i;
                    return 0;
                }
            }
        cout<<"no";
    
}