#include <iostream>
using namespace std;

class Employee
{
    int empId;
    float empSal;

public:
    void input();   // input() declaration
    void display(); // display() declaration

    float highSal() // highSAl func declaration n definition
    {
        return empSal;
    }
};

void Employee ::input() // input definition
{
    cout << "Enter employee ID and Salary: ";
    cin >> empId >> empSal;
}

void Employee ::display() // display definition
{
    cout << "Employee ID: " << empId << endl;
    cout << "Salary: " << empSal << endl;
}

int main()
{
    Employee e[5]; // array of object

    for (int i = 0; i < 5; i++)
    {
        cout << "Employee " << i + 1 << endl;
        e[i].input();
    }

    int high = 0;
    for (int i = 1; i < 5; i++)
    {
        if (e[i].highSal() > e[high].highSal())
        {
            high = i;
        }
    }

    cout << "Highest Salary Employee is:  " << endl;
    e[high].display();

    return 0;
}