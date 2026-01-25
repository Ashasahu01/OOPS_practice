#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    float cgpa;
    int n;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of Students: ";
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of Student " << i + 1 << endl;
        s[i].input();
    }

    cout << "\n";

    cout << "Students Details: \n";
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}