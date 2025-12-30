#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;


void add_item(int value) {
    Node* n = new Node();
    n->data = value;
    n->next = NULL;

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void remove_item(int value) {
    if (head == NULL) return;

    if (head->data == value) {
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}


void search_item(int value) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            cout << "Found\n";
            return;
        }
        temp = temp->next;
    }
    cout << "Not Found\n";
}

void update_item(int oldValue, int newValue) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == oldValue) {
            temp->data = newValue;
            return;
        }
        temp = temp->next;
    }
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    add_item(1);
    add_item(2);
    add_item(3);

    display();

    search_item(2);

    update_item(2, 20);
    display();

    remove_item(1);
    display();

    return 0;
}
