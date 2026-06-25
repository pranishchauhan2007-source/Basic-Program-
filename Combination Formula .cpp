#include<iostream>
using namespace std;
int main()
{
    int n, r, fact = 1, f = 1, i , l=1;
    float p;
    cout << "enter the n and r";
    cin >> n >> r;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    for(i = 1; i <= n - r; i++)
    {
        f = f * i;
    }
    for (i = 1; i <= r; i++)
    { 
        l = l * i;
    }
    p = (float)fact /(l* f);
    cout << p;
}