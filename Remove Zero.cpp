#include <iostream>
using namespace std;

int main() {
        long long n,rem,ans=0,mul=1;
        cin>>n;
        while (n>0)
        {
            rem=n%10;
            if(rem!=0)
            {
                ans=rem*mul+ans;
                mul*=10;
                
            }
            n/=10;
            
        }
        cout<< ans;
            
    }
