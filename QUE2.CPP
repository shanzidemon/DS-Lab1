#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;
    int front, rear;
    int size;

public:
    // Constructor
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Check if empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if full
    bool isFull() {
        return (rear == size - 1);
    }

    // Enqueue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is FULL! Cannot enqueue.\n";
        } else {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = value;
            cout << value << " enqueued into queue.\n";
        }
    }

    // Dequeue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! Cannot dequeue.\n";
        } else {
            cout << arr[front] << " dequeued from queue.\n";
            front++;

            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    // Peek (front element)
    void peek() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!\n";
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is EMPTY!\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter queue size: ";
    cin >> n;

    Queue q(n);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.peek();

    q.enqueue(40);
    q.enqueue(50);

    q.display();

    return 0;
}
