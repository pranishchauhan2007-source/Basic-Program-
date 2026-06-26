#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin >>n;
    int num = n;
    int rem, sum = 0, r, s = 0;
    int i, j, k;
    while(num != 0)
    {
        rem = num % 100;
        sum = sum * 10 + rem;
        num /= 100;
    }
    int temp = sum;
    while(temp > 0)
    {
        r = temp % 100;
        s = s * 10 + r;
        temp /= 100;
    }
    for(i = 2; i < n; i++)
        if(n % i == 0) break;
    for(j = 2; j < sum; j++)
        if(sum % j == 0) break;
    for(k = 2; k < s; k++)
        if(s % k == 0) break;
    if(i == n && j == sum && k == s)
        cout << "prime";
    else
        cout << "not prime";
}