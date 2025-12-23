#include <iostream>
using namespace std;

const int SIZE = 5;

int queue[SIZE];
int front = -1, rear = -1;

bool isEmpty() {
    return (front == -1);
}

bool isFull() {
    return (rear == SIZE - 1);
}

void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is FULL!\n";
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
    cout << value << " inserted.\n";
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is EMPTY!\n";
        return;
    }

    cout << queue[front] << " removed.\n";
    front++;

    if (front > rear)
        front = rear = -1;
}

void peek() {
    if (isEmpty())
        cout << "Queue is EMPTY!\n";
    else
        cout << "Front element: " << queue[front] << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is EMPTY!\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    peek();

    enqueue(40);
    enqueue(50);
    enqueue(60);   // FULL

    display();

    return 0;
}
