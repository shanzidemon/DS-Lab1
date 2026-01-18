#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};
Node* top= NULL;

void push(int value2){
    Node* n=new Node();
    n->value=value2;
    n->next=top;
    top=n;
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