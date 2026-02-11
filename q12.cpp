#include <iostream>
#include <string>
using namespace std;

class strInfo
{
    string str;

public:
    void input();
    int length();
    int countVowels();
};

void strInfo::input()
{
    cout << "Enter a string: ";
    cin >> str;
}

int strInfo::length()
{
    return str.length();
}

int strInfo::countVowels()
{
    int vowel = 0;
    for (char ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
    }
    return vowel;
}

int main()
{
    strInfo s;

    s.input();

    cout << "Length of string: " << s.length() << endl;
    cout << "Number of vowels: " << s.countVowels() << endl;

    return 0;
}
