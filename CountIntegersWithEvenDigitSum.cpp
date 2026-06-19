#include <iostream>
using namespace std;

int main() {
    
        int num ,count = 0;
        cin>>num;

        for (int i = 1; i <= num; i++) {
            int n = i;
            int sum = 0;

            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }

            if (sum % 2 == 0)
                count++;
        }

        cout<< count;
    }
