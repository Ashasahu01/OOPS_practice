#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    void input();

    Matrix sum(Matrix m)
    {
        Matrix temp;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }

    void display();
};

void Matrix ::input()
{
    cout << "Enter elements of 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Matrix ::display()
{
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Matrix m1, m2, sum;

    cout << "Matrix 1:\n";
    m1.input();

    cout << "Matrix 2:\n";
    m2.input();

    sum = m1.sum(m2);

    sum.display();

    return 0;
}
