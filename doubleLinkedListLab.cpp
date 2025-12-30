#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

// add_item (at end)
void add_item(int value) {
    Node* n = new Node();
    n->data = value;
    n->prev = NULL;
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
    n->prev = temp;
}

// remove_item
void remove_item(int value) {
    if (head == NULL) return;

    Node* temp = head;

    // if head to be deleted
    if (temp->data == value) {
        head = temp->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        return;
    }

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) return;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    temp->prev->next = temp->next;

    delete temp;
}

// search_item
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

// update_item
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

// display forward
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    add_item(10);
    add_item(20);
    add_item(30);

    display();

    search_item(20);

    update_item(20, 200);
    display();

    remove_item(10);
    display();

    return 0;
}
