#include <iostream>
using namespace std;

class Week
{
public:
    enum days
    {
        MON = 1,
        TUE,
        WED,
        THU,
        FRI
    };

    void weekDay(int day);
};

void Week ::weekDay(int day)
{
    if (day >= MON && day <= FRI)
        cout << "Working day." << endl;
    else
        cout << "?Not a working day." << endl;
}

int main()
{
    Week w;
    int days;

    cout << "enter any number from 1 to 5: ";
    cin >> days;

    w.weekDay(days);

    return 0;
}