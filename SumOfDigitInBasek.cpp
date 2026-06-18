#include <iostream>
using namespace std;

int main() {
        long long n,rem,sum=0,k;
        cout<<"enter the number:";
        cin>>n;
        cout<<"enter the base:";
        cin>>k;
        while (n>0)
        {
            rem=n%k;
            sum+=rem;
            n/=k;
            
        }
        cout<< sum;
            
    }
