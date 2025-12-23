#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter queue size: ";
    cin >> size;

    // Step 1: Dynamic memory allocation
    int *queue = new int[size];

    int front = -1;
    int rear = -1;

    // Step 2: Enqueue elements
    cout << "\n--- ENQUEUE ---\n";
    for (int i = 0; i < size; i++) {
        int value;
        cout << "Enter value: ";
        cin >> value;

        if (rear == size - 1) {
            cout << "Queue FULL!\n";
            break;
        }

        if (front == -1)
            front = 0;

        rear++;

        // USING POINTER (IMPORTANT)
        *(queue + rear) = value;
    }

    // Step 3: Display queue using pointer
    cout << "\nQueue elements using pointer:\n";
    for (int i = front; i <= rear; i++) {
        cout << *(queue + i) << " ";
    }

    // Step 4: Show memory addresses
    cout << "\n\nMemory addresses:\n";
    for (int i = front; i <= rear; i++) {
        cout << "Address of element " << i << " = " << (queue + i) << endl;
    }

    // Step 5: Dequeue one element
    cout << "\n--- DEQUEUE ---\n";
    cout << "Removed element: " << *(queue + front) << endl;
    front++;

    // Step 6: Peek
    cout << "Front element now: " << *(queue + front) << endl;

    // Step 7: Free memory
    delete[] queue;

    return 0;
}
