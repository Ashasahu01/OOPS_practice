// Parent Class
class A {
    // Encapsulation (private variable)
    private int x;

    // Constructor using 'this' keyword
    A(int x) {
        this.x = x;
    }

    // Getter method (Encapsulation)
    public int getX() {
        return x;
    }

    // Method
    void show() {
        System.out.println("Value in A: " + x);
    }
}

// Child Class (Inheritance)
class B extends A {

    // Constructor
    B(int x) {
        super(x);   // calling parent constructor
    }

    // Method Overriding (Polymorphism)
    @Override
    void show() {
        System.out.println("Value in B: " + getX());
    }
}

// Main Class
public class Main {
    public static void main(String[] args) {

        // Object creation
        A obj1 = new A(5);
        A obj2 = new B(10);   // Runtime Polymorphism

        obj1.show();  // calls A's method
        obj2.show();  // calls B's method (polymorphism)
    }
}