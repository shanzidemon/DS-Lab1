int findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int findMax(Node* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}
