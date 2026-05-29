#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        int height;

        Node(int data) {
            this->data = data;
            left = right = NULL;
            height = 1;
        }
};


int getHeight(Node* root) { 
    if(root == NULL) {
        return 0;
    }

    return root->height;
}

int getBalance(Node* root) {
    if(root == NULL) {
        return 0;
    }

    return getHeight(root->left) - getHeight(root->right);
}

// LL case
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // rotation
    x->right = y;
    y->left = T2;

    // update Heights
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));

    return x;
}

// RR case
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // rotation
    y->left = x;
    x->right = T2;

    // update heights
    x->height =  1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y;
}

Node* insertAVL(Node* root, int key) {

    // Step 1: Normal BST Insertion
    if(root == NULL) {
        return new Node(key);
    }

    if(key < root->data) {
        root->left = insertAVL(root->left, key);
    } 
    else if(key > root->data) {
        root->right = insertAVL(root->right, key);
    }
    else {
        return root;
    }

    // Step 2: update height
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Step 3: Calculate balance factor
    int bf = getBalance(root);

    // Step 4: check imbalance cases

    // LL case
    if(bf > 1 && key < root->left->data) {
        return rightRotate(root);
    }

    // RR case
    if(bf < -1 && key > root->right->data) {
        return leftRotate(root);
    }

    // LR case
    if(bf > 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL case
    if(bf < -1 && key < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
} 

void preOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {

    Node* root = NULL;

    int arr[] = {10, 20, 30, 40, 50, 25};

    for(int i = 0; i < 6; i++) {
        root = insertAVL(root, arr[i]);
    }

    cout << "Preorder Traversal: ";
    preOrder(root);
    cout << endl;

    return 0;
}