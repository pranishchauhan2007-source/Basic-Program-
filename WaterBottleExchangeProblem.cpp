#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int total = n;

    while (n >= t) {
        int newBottle = n / t;
        int rem = n % t;

        total += newBottle;
        n = newBottle + rem;
    }

    cout << total;

    return 0;
}