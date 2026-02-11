#include <iostream>
using namespace std;
// class for food item 
class FoodItem {
private:
    int id;
    string name;
    double price;

public:
    // overriding Default Constructor
    FoodItem() {
        id = 0;
        name = "None";
        price = 0;
    }

    // Parameterized Constructor
    FoodItem(int i, string n, double p) {
        id = i;
        name = n;
        price = p;
    }

    void display() {
        cout << id << "  " << name << "  ₹" << price << endl;
    }

    double getPrice() {
        return price;
    }
};

// class for ordering item

class Order {
private:
// using different class objects as data member
    FoodItem item1, item2;
    double total;

public:
    // Default Constructor
    Order() {
        total = 0;
    }

    // Function Overloading (addItem)
    void addItem(FoodItem f) {
        item1 = f;
        total += f.getPrice();
    }

    void addItem(FoodItem f1, FoodItem f2) {
        item1 = f1;
        item2 = f2;
        total += f1.getPrice() + f2.getPrice();
    }

    void showBill() {
        cout << "\nTotal Bill: ₹" << total << endl;
    }

    // Destructor
    ~Order() {
        cout << "\nOrder completed. Thank you!\n";
    }
};

int main() {

    FoodItem f1(1, "Pizza", 250);
    FoodItem f2(2, "Burger", 120);

    cout << "Menu:\n";
    f1.display();
    f2.display();

    Order o1;

    // Using overloaded functions
    o1.addItem(f1);
    o1.addItem(f1, f2);

    o1.showBill();

    return 0;
}
