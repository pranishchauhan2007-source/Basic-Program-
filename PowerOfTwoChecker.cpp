#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "false";
        return 0;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }

    if (n == 1)
        cout << "true";
    else
        cout << "false";
}