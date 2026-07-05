#include <iostream>
using namespace std;

int main()
{
    int i = 5, j = 1;

    while(i)
    {
        j = i * j;
        i--;
    }

    cout << i << endl;
    cout << j << endl;

    return 0;
}