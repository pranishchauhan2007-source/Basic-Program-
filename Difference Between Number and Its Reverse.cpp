#include<iostream> 
using namespace std;
    int main() 
    {
        int rem, n,a, sum = 0;
        cin>>n;
        a = n;
        while (n > 0)
        {
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }
        cout<< abs(a - sum);
    }

