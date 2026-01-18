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

int findMin(Node* root) {
    if (root == NULL) {
        cout << "Tree is empty" << endl;
        return -1;
    }

    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int findMax(Node* root) {
    if (root == NULL) {
        cout << "Tree is empty" << endl;
        return -1;
    }

    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}


int main() {
    Bst Tree;
    Tree.insertValue(30);
    Tree.insertValue(20);
    Tree.insertValue(40);
    Tree.insertValue(100);
    Tree.insertValue(15);
    Tree.insertValue(90);
    Tree.insertValue(65);
    Tree.insertValue(25);
    Tree.insertValue(38);
    cout<<"The Mimum Product price is: "<<findMin(Tree.root)<<endl;
    cout<<"The maximum product price is "<<findMax(Tree.root)<<endl;
}
