#include <iostream>
using namespace std;

int main() {
    int a, i = 1, sum = 0;

    cout << "Enter number: ";
    cin >> a;

    while (i < a) {
        if (a % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == a)
        cout << "true";
    else
        cout << "false";

    return 0;
}