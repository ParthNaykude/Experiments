#include<iostream>
using namespace std;
const int MAX_SIZE = 100;

class Stack 
{
    public:
    int stackSize;
    int stack[MAX_SIZE];
    int top;

    public:
    Stack() 
    {
        top = 0;
        cout << "Enter the size of Stack: ";
        cin >> stackSize;
        cout << endl; 
    }

    Stack(int size) 
    {
        top = 0;
        this->stackSize = size;
    }

    void Push(int x)
    {
        if (top > stackSize) 
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        stack[top] = x;
        top++;
    }

    void Push() 
    {
        int x;
        cout << "Enter the value you want to Push: ";
        cin >> x;
        cout << endl;
        if (top > stackSize)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        stack[top] = x;
        top++;
    }

    void Pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        stack[top] = 0;
        top--;
    }

    void Display() {
        cout << "Your Stack: \n";
        for (int i = 0; i < top; i++) {
            cout << stack[i] << endl;
        }
    }
};

class Queue 
{
    public:
    int queueSize;
    int queue[MAX_SIZE];
    int rear;
    int front;

    public:
    Queue() {
        rear = 0;
        front = 0;
        cout << "Enter the size of Queue: ";
        cin >> queueSize;
        cout << endl;
    }

    Queue(int size) {
        rear = 0;
        front = 0;
        this->queueSize = size;
    }

    void Enqueue(int x) {
        if (rear > queueSize) {
            cout << "Queue Overflow" << endl;
            return;
        }
        queue[rear] = x;
        rear++;
    }

    void Enqueue() {
        int x;
        cout << "Enter the value you want to Enqueue: ";
        cin >> x;
        cout << endl;
        if (rear > queueSize) {
            cout << "Queue Overflow" << endl;
            return;
        }
        queue[rear] = x;
        rear++;
    }

    void Dequeue() {
        if (rear < 0) {
            cout << "Queue Underflow" << endl;
            return;
        }
        queue[front] = 0;
        front++;
    }

    void Display() {
        cout << "Your Queue: \n";
        for (int i = front; i < rear; i++) {
            cout << queue[i] << endl;
        }
    }
};

int main() {
    int choice;

    cout << "1. Stack" << endl;
    cout << "2. Queue" << endl;
    cout << "What do you want to perform: " << endl;
    cin >> choice;

    if (choice == 1) {
        Stack s1;

        int ch;
        do {
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Display" << endl;
            cout << "What do you want to perform: ";
            cin >> ch;
            cout << endl;

            if (ch == 1) {
                s1.Push();
            }
            if (ch == 2) {
                s1.Pop();
            }
        } while (ch != 3);

        s1.Display();
    }

    if (choice == 2) {
        Queue q1;

        int ch;
        do {
            cout << "1. Enqueue" << endl;
            cout << "2. Dequeue" << endl;
            cout << "3. Display" << endl;
            cout << "What do you want to perform: ";
            cin >> ch;
            cout << endl;

            if (ch == 1) {
                q1.Enqueue();
            }
            if (ch == 2) {
                q1.Dequeue();
            }
        } while (ch != 3);

        q1.Display();
    }

    return 0;
}
