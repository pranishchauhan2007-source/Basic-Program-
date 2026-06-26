#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int s=n+1;
    for(int i = 1; i * i <= s; i++)
    {
        if(i * i == s)
        {
            cout << "yes";
            return 0;
        }
    }
    cout<<"no";
    
}