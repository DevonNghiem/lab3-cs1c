#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    double gpa;
    int studentId;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your student ID: ";
    cin >> studentId;

    cout << "Enter your GPA: ";
    cin >> gpa;

    while (gpa < 0.0 || gpa > 4.0) 
    {
        cerr << "Invalid GPA. Please enter a GPA between 0.0 and 4.0." << endl;
        cout << "Enter your GPA: ";
        cin >> gpa;
    } 

    cout << "Student ID is: " << studentId << endl;
    cout << "Name is: " << name << endl;
    cout << "GPA is: " << gpa << endl;
    
    return 0;
}