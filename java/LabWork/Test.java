import java.util.*;

class MyStack {
    int[] arr;
    int top;
    int capacity;

    // Constructor
    MyStack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Push
    void push(int x) {
        if (top == capacity - 1) {
            System.out.println("Stack Overflow");
            return;
        }
        arr[++top] = x;
    }

    // Pop
    int pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return -1;
        }
        return arr[top--];
    }

    // Peek
    int peek() {
        if (top == -1) {
            System.out.println("Empty Stack");
            return -1;
        }
        return arr[top];
    }

    // Check empty
    boolean isEmpty() {
        return top == -1;
    }
}

class MyQueue {
    int[] arr;
    int front, rear, capacity;

    MyQueue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == capacity - 1) {
            System.out.println("Queue Overflow");
            return;
        }
        arr[++rear] = x;
    }

    int dequeue() {
        if (front > rear) {
            System.out.println("Queue Underflow");
            return -1;
        }
        return arr[front++];
    }

    int peek() {
        if (front > rear) {
            System.out.println("Empty Queue");
            return -1;
        }
        return arr[front];
    }
}


public class Test {
    static void main(String[] args) {
        System.out.println("Stack implementation");

        MyStack s = new MyStack(50);

        s.push(12);
        s.push(52);
        s.push(70);

        System.out.println(s.pop());
        System.out.println(s.peek());

        System.out.println("Queue implementation");

        MyQueue q = new MyQueue(50);

        q.enqueue(23);
        q.enqueue(65);
        q.enqueue(87);

        System.out.println(q.dequeue());
        System.out.println(q.peek());
    }
}
