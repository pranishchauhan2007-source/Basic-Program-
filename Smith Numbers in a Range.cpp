#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    for (int n = start; n <= end; n++)
    {
        int sum = 0;
        int add = 0;

        // digit sum of number
        int a = n;
        while (a != 0)
        {
            sum += a % 10;
            a /= 10;
        }

        // prime factor digit sum
        int temp = n;
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

        // compare per number
        if (sum == add)
        {
            cout << n << " ";
        }
    }

    return 0;
}