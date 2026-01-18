#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class Bst {
public:
    Node* root;

    Bst() {
        root = NULL;
    }

    Node* insert(Node* node, int value) {
        if (node == NULL) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else if (value > node->data) {
            node->right = insert(node->right, value);
        }
        return node;
    }

    void insertValue(int value) {
        root = insert(root, value);
    }
};

int main() {
    Bst Tree;
    Tree.insertValue(30);
    Tree.insertValue(20);
    Tree.insertValue(40);

}
