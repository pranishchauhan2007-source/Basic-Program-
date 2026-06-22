#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2,count=0;

    while (n > 1) {
        if (n % i == 0) {
        count++;
            n = n / i;
        } else {
            i++;
        }
    }
    cout<<count;

    return 0;
}