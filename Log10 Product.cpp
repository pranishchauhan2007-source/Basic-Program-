#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, result;

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    result = log10(a * b);

    // log10(a*b) = log10(a) + log10(b);

    cout << "log10(a*b) = " << result;

    return 0;
}