#include <iostream>
using namespace std;

class Calculator
{
public:
    float add(float a, float b)
    {
        return a + b;
    }

    float sub(float a, float b)
    {
        return a - b;
    }

    float mul(float a, float b)
    {
        return a * b;
    }

    float div(float a, float b)
    {
        if (b != 0)
            return a / b;
        else
        {
            cout << "Error!\n";
            return 0;
        }
    }
};

int main()
{
    Calculator c;
    int choice;
    float a, b;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    switch (choice)
    {
    case 1:
        cout << "Result = " << c.add(a, b) << endl;
        break;

    case 2:
        cout << "Result = " << c.sub(a, b) << endl;
        break;

    case 3:
        cout << "Result = " << c.mul(a, b) << endl;
        break;

    case 4:
        cout << "Result = " << c.div(a, b) << endl;
        break;

    case 5:
        cout << "Exiting program...\n";
        break;

    default:
        cout << "Invalid choice!\n";
    }

    return 0;
}
