#include<iostream>
using namespace std;

class Distance{
    float mtr, cm;

public:
    void input()
    {
    cout << "Enter meter and centimeters: ";
    cin >> mtr >> cm;
    }

    void display()
    {
        cout << "Distance:- " << mtr << "m" << cm <<"cm.";
    }

    Distance add(Distance d){
        //addition logic
    }
};

int main(){
    Distance d1, d2, d3;

    cout << "Enter first and second distance: \n";
    d1.input();
    d2.input();

    d3 = d1.add(d2);

    cout << "Distance is :- ";
    d3.display();

    return 0;
}