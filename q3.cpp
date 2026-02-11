#include <iostream>
using namespace std;

class Employee
{
    int empId;
    float empSal;

public:
    void input();   // input() declaration
    void display(); // display() declaration

    bool greaterSal()
    { // highSAl func declaration n definition
        if (empSal > 50000)
            return true;
        else
            return false;
    }
};

void Employee ::input()  // input definition
{ 
    cout << "Enter employee ID and Salary: ";
    cin >> empId >> empSal;
}

void Employee ::display()   // display definition
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

    cout << "Employees(Salary>5000):- " << endl;
    // for (int i=0; i<5; i++){        //cannot write like this coz empSal is prvt data mmbr of class, we cannot access outside directly
    //     if(e[i].empSal > 5000){
    //         e[i].display();
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {
        if (e[i].greaterSal())
        {
            e[i].display();
        }
    }

    return 0;
}