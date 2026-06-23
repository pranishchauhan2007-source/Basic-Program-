#include <iostream>
using namespace std;
int main() {
    int start, end, count = 0;
    cin >> start >> end;
    for (int num = start; num <= end; num++) {
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            cout << num << " ";
            count++;
        }
    }
    cout << "\nCount = " << count;
}