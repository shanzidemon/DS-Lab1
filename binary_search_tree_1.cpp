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

class BST {
public:
    Node* root;

    BST() {
        root = NULL;
    }

    // INSERT
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

    // SEARCH
    bool search(Node* node, int value) {
        if (node == NULL) {
            return false;
        }

        if (node->data == value) {
            return true;
        }

        if (value < node->data) {
            return search(node->left, value);
        } else {
            return search(node->right, value);
        }
    }

    // FIND MIN VALUE NODE (for delete)
    Node* findMin(Node* node) {
        while (node->left != NULL) {
            node = node->left;
        }
        return node;
    }

    // DELETE
    Node* deleteNode(Node* node, int value) {
        if (node == NULL) {
            return node;
        }

        if (value < node->data) {
            node->left = deleteNode(node->left, value);
        } 
        else if (value > node->data) {
            node->right = deleteNode(node->right, value);
        } 
        else {
            // no child
            if (node->left == NULL && node->right == NULL) {
                delete node;
                return NULL;
            }
            // one child
            else if (node->left == NULL) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == NULL) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            // two children
            Node* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }

        return node;
    }

    // INORDER PRINT (optional but useful)
    void inorder(Node* node) {
        if (node == NULL) return;

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
};

int main() {
    BST tree;

    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    cout << "Inorder: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Search 40: ";
    cout << tree.search(tree.root, 40) << endl;

    cout << "Delete 50" << endl;
    tree.root = tree.deleteNode(tree.root, 50);

    cout << "Inorder after delete: ";
    tree.inorder(tree.root);
    cout << endl;

    return 0;
}