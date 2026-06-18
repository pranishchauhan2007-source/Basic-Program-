#include <iostream>
using namespace std;

int main() {
        long long rem,ans=0,mul=1,sum=0;
        while (n>0)
        {
            rem=n%10;
            if(rem!=0)
            {
                ans=rem*mul+ans;
        
                sum=rem+sum;
                mul*=10;
                
            }
            n/=10;
            
        }
        cout<< ans*sum;
            
    }
};