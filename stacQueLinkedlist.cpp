#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* n = new Node();
    n->data = value;
    n->next = top;
    top = n;
}

void pop() {
    if (top == NULL) {
        cout << "Stack Empty\n";
        return;
    }
    Node* del = top;
    top = top->next;
    delete del;
}

void displayStack() {
    Node* temp = top;
    cout << "Stack: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* n = new Node();
    n->data = value;
    n->next = NULL;

    if (front == NULL) {
        front = rear = n;
        return;
    }
    rear->next = n;
    rear = n;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue Empty\n";
        return;
    }
    Node* del = front;
    front = front->next;
    delete del;

    if (front == NULL)
        rear = NULL;
}

void displayQueue() {
    Node* temp = front;
    cout << "Queue: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

   
}
