#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cin >> start >> end;
    int count = 0;
    for(int n = start; n <= end; n++)
    {
        int temp = n;
        int rem, sum = 0;
        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp /= 10;
        }
        if(sum == n)  
        {
            int i;
            for(i = 2; i < n; i++)
            {
                if(n % i == 0)
                    break;
            }
            if(i == n)   
                count++;
        }
    }
    cout << count;
    return 0;
}