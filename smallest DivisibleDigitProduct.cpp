#include <iostream>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;

    while (true) {
        long long temp = n;
        long long product = 1;
        if (temp == 0)
            product = 0;

        while (temp > 0) {
            product *= (temp % 10);
            temp /= 10;
        }

        if (product % t == 0) {
            cout << n;
            break;
        }

        n++;
    }

    return 0;
}