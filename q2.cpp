#include <iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;

public:
    void input()    //input func inside the class
    {
        cout << "Enter values of Length and Breadth: ";
        cin >> length >> breadth;
    }

    void display();  //display func declaration
    
};

void Rectangle ::display()  //display func definition
{
    cout << "Area of Rectangle: " << length * breadth << endl;
}

int main()
{
    Rectangle r;
    r.input();
    r.display();

    return 0;

}