#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rem, sum = 0, count = 0;
    int r, s = 0, c = 0;

    int original = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
        count++;
    }
    while (sum > 0) {
        r = sum % 10;
        s = s * 10 + r;
        sum /= 10;
        c++;
    }
    if (count == c)
        cout << "true";
    else
        cout << "false";

    return 0;
}