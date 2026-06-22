#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2,sum=0;

    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
        } else {
            i++;
        }
    sum=sum+i;
    }
    cout<<sum;

    return 0;
}