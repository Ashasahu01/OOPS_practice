#include <iostream>
using namespace std;

class num
{
public:
    inline int square(int a)
    {
        return a * a;
    }

    inline int cube(int a)
    {
        return a * a * a;
    }
};

int main()
{
    num n;
    int num;

    cout << "Enter any number: ";
    cin >> num;

    cout << "Square: " << n.square(num) << endl;
    cout << "Cube: " << n.cube(num) << endl;

    return 0;
}