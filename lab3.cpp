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

    cout << "Hello " << name << " " << "your student ID is " << studentId << ".";


    return 0;
}