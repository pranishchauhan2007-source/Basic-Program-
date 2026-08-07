#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string password;
    int score = 0;

    cout << "Enter your password: ";
    cin >> password;

    if(password.length() >= 8)
        score++;

    bool upper = false, lower = false, digit = false, special = false;

    for(char ch : password)
    {
        if(isupper(ch))
            upper = true;
        else if(islower(ch))
            lower = true;
        else if(isdigit(ch))
            digit = true;
        else
            special = true;
    }

    if(upper) score++;
    if(lower) score++;
    if(digit) score++;
    if(special) score++;

    cout << "\nPassword Security Score: " << score << "/5\n";

    if(score == 5)
        cout << "Strong Password";
    else if(score >= 3)
        cout << "Medium Password";
    else
        cout << "Weak Password";

    return 0;
}