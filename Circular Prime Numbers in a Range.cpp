#include<iostream>
using namespace std;

int main()
{
    int n,start,end,count=0 ;
    cin>>start>>end;
    int num = n;
    for (num=start; num<=end; num++)
    {
    int rem, sum = 0, r, s = 0;
    int i, j, k;
    int x=num;
    while(x != 0)
    {
        rem = x % 100;
        sum = sum * 10 + rem;
        x/= 100;
    }
    int temp = sum;
    while(temp > 0)
    {
        r = temp % 100;
        s = s * 10 + r;
        temp /= 100;
    }
    for(i = 2; i < num; i++)
        if(num % i == 0) break;

    for(j = 2; j < sum; j++)
        if(sum % j == 0) break;

    for(k = 2; k < s; k++)
        if(s % k == 0) break;

    if(i == num && j == sum && k == s)
    cout<<i<<endl;
        count++;
   }
    cout<<count<<endl;
}