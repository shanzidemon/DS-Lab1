#include <iostream>
using namespace std;

int main() {

    int stack[5];   // stack array
    int top = -1;   // initially empty

    // ==== PUSH operation ====
    int value = 10;

    if(top == 4) {
        cout << "Stack is Full!" << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack." << endl;
    }

    // another push
    value = 20;
    if(top == 4) {
        cout << "Stack is Full!" << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack." << endl;
    }

    // show stack items
    cout << "Stack elements: ";
    for(int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }

    return 0;
}
