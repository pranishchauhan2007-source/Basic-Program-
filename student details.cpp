#include <iostream>
#include <string>
using namespace std;

int main() {

    int age;
    float height;
    string name, branch, hobbies;
    long long roll_no, mobile_no;

    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the branch: ";
    cin >> branch;

    cout << "Enter the age: ";
    cin >> age;

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the hobbies: ";
    cin >> hobbies;

    cout << "Enter the roll_no: ";
    cin >> roll_no;

    cout << "Enter the mobile_no: ";
    cin >> mobile_no;

    cout << "\n--- Student Details ---\n";
    cout << "Name = " << name << endl;
    cout << "Branch = " << branch << endl;
    cout << "Age = " << age << endl;
    cout << "Height = " << height << " inch" << endl;
    cout << "Hobbies = " << hobbies << endl;
    cout << "Roll No = " << roll_no << endl;
    cout << "Mobile No = " << mobile_no << endl;

    return 0;
}