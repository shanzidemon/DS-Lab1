#include <iostream>
using namespace std;

#define MAX 100   // Stack size

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    // insert/push value
    void push(int value) {
        if(top >= MAX - 1) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = value;
            cout << value << " inserted\n";
        }
    }

    // remove/pop value
    int pop() {
        if(top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        } else {
            return arr[top--];
        }
    }

    // display stack elements
    void display() {
        if(top < 0) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for(int i = 0; i <= top; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
}
Sort.
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
    return 0;
}
