#include <iostream>
#include <iomanip>
#include <stdexcept>   // for exception handling
using namespace std;

enum Category { VEG, NONVEG, DRINK };

class Item {
protected:
    int id;
    string name;
    double price;
    static int count;

public:
    Item(int i = 0, string n = "None", double p = 0.0) {

        // Exception for invalid ID
        if(i < 0)
            throw invalid_argument("Item ID cannot be negative");

        // Exception for invalid price
        if(p < 0)
            throw invalid_argument("Price cannot be negative");

        id = i;
        name = n;
        price = p;
        count++;
    }

    double operator+(Item &obj) {
        double total = this->price + obj.price;

        // Exception if bill too large
        if(total > 10000)
            throw overflow_error("Bill amount too large");

        return total;
    }

    bool operator==(Item &obj) {
        return this->price == obj.price;
    }

    friend ostream& operator<<(ostream &out, Item &obj);

    inline double getPrice() { return price; }

    virtual void display() {
        cout << "ID: " << id << " Name: " << name
             << " Price: ₹" << fixed << setprecision(2) << price << endl;
    }

    static void showCount() {
        cout << "Total items created: " << count << endl;
    }

    friend void applyDiscount(Item &obj);

    virtual ~Item() {}
};

int Item::count = 0;

class FoodItem : public Item {
    Category type;

public:
    FoodItem(int i, string n, double p, Category t)
        : Item(i, n, p), type(t) {}

    void display() override {
        cout << "[FOOD] ";
        Item::display();
    }
};

class DrinkItem : public Item {
public:
    DrinkItem(int i, string n, double p)
        : Item(i, n, p) {}

    void display() override {
        cout << "[DRINK] ";
        Item::display();
    }
};

void applyDiscount(Item &obj) {

    if(obj.price <= 0)
        throw runtime_error("Cannot apply discount on invalid price");

    obj.price = obj.price * 0.9;
}

double calculateBill(double a) {
    return a;
}

double calculateBill(double a, double b) {
    return a + b;
}

double& increasePrice(double &p) {

    if(p < 0)
        throw runtime_error("Price cannot be negative");

    p += 20;
    return p;
}

ostream& operator<<(ostream &o, Item &obj) {
    o << "ID: " << obj.id
      << " Name: " << obj.name
      << " Price: ₹" << fixed << setprecision(2) << obj.price;
    return o;
}

int main() {

    try {

        Item *ptr1 = new FoodItem(1, "Pizza", 250, VEG);
        Item *ptr2 = new FoodItem(2, "Burger", 180, NONVEG);
        Item *ptr3 = new DrinkItem(3, "Coke", 60);

        cout << "\n--- Menu ---\n";
        ptr1->display();
        ptr2->display();
        ptr3->display();

        double total = *ptr1 + *ptr2;
        cout << "\nTotal Bill using Operator + : ₹" << total << endl;

        if (*ptr1 == *ptr2)
            cout << "Both items have same price\n";
        else
            cout << "Items have different prices\n";

        cout << "\nPrinting Item using << operator:\n";
        cout << *ptr1 << endl;

        applyDiscount(*ptr1);

        cout << "\nAfter Discount on Pizza:\n";
        ptr1->display();

        Item::showCount();

        delete ptr1;
        delete ptr2;
        delete ptr3;
    }

    // Catch specific exceptions
    catch(invalid_argument &e) {
        cout << "Invalid Argument Exception: " << e.what() << endl;
    }
    catch(overflow_error &e) {
        cout << "Overflow Exception: " << e.what() << endl;
    }
    catch(runtime_error &e) {
        cout << "Runtime Exception: " << e.what() << endl;
    }
    catch(...) {
        cout << "Unknown Exception occurred!" << endl;
    }

    return 0;
}