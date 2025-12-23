#include <iostream>
using namespace std;

#define SIZE 5   // Queue size

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Enqueue operation
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

    // Dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! Cannot dequeue.\n";
        } else {
            cout << arr[front] << " dequeued from queue.\n";
            front++;

            // Reset queue if empty after dequeue
            if (front > rear) {
                front = rear = -1;
            }
        }
    }

    // Get front element
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
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.peek();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);   // Will show FULL message

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    return 0;
}
