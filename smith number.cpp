#include <iostream>
using namespace std;

int main()
{
    int num ;
    cin>>num;
    int n = num;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    int temp = num;
    int add = 0;
    for (int i = 2; i <= temp; i++)
    {
        while (temp % i == 0)
        {
            int x = i;

            while (x != 0)
            {
                add += x % 10;
                x /= 10;
            }

            temp /= i;
        }
    }

    if (sum == add)
        cout << "Smith Number";
    else
        cout << "Not a Smith Number";

    return 0;
}