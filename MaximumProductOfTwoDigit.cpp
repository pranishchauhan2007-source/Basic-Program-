#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max1 = 0, max2 = 0;

    while (n > 0) {
        int rem = n % 10;

        if (rem > max1) {
            max2 = max1;
            max1 = rem;
        }
        else if (rem > max2) {
            max2 = rem;
        }

        n /= 10;
    }

    cout << max1 * max2;
}