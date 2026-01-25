#include <iostream>
using namespace std;

class num
{
public:
    void printNum()
    {
        cout << "Printing numbers from 1 to 5 using endl:\n";
        for (int i = 1; i <= 5; i++)
        {
            cout << i << endl;
        }
    }
};

int main()
{
    num n;
    n.printNum();

    return 0;
}
