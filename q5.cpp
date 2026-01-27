#include <iostream>
using namespace std;

class Distance
{

public:
    int mtr, cm;
    void input()
    {
        cout << "Enter meter and centimeters: ";
        cin >> mtr >> cm;
    }

    void display()
    {
        cout << mtr << "m" << cm << "cm.";
    }
};

Distance add(Distance d1, Distance d2)
{
    // addition logic
    Distance d3;
    d3.cm = (d1.cm + d2.cm) % 100;
    d3.mtr = (d1.cm + d2.cm) / 100 + d1.mtr + d2.mtr;
    cout << d3.mtr << d3.cm;
    return d3;
}

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first and second distance: \n";
    D1.input();
    D2.input();

    D3 = add(D1, D2);

    cout << "Distance is :- ";
    D3.display();

    return 0;
}