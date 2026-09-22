#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int studentId;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your student ID: ";
    cin >> studentId;

    cout << "Student ID is: " << studentId << endl;
    cout << "Name is: " << name << endl;

    return 0;
}