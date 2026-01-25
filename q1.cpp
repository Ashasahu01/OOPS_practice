#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    float marks;

public:
    void input();
    void display();
};

void Student ::input()
{
    cout << "Enter roll number and marks: ";
    cin >> rollNo >> marks;
}

void Student ::display()
{
    cout << "Your Roll number is " << rollNo << " " << "and Marks is " << marks << "\n";
}

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}
