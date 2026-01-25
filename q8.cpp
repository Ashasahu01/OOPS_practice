#include<iostream>
using namespace std;

class Book
{
    int id;
    string title;
    float price;

public:
    void input(){
    cout << "Book Id: ";
    cin >> id;

    cout << "Book Title: ";
    cin >> title;

    cout << "Book Price: ";
    cin >> price;
    }

    void display();

};

void Book :: display(){
    cout << "Book details: \n";
    cout << "Book ID: "<<id << endl;
    cout <<"Title: "<<title << endl;
    cout<<"Price: "<<price << endl;
}

int main(){
    Book b;
    b.input();
    b.display();

    return 0;
}