#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            left = right = NULL;
        }
};

Node* insert(Node* root, int val) {
    if(root == NULL) {
        root = new Node(val);
        return root;
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    }
    else {  // val > root->data
        root->right = insert(root->right, val);
    }

    return root;
}

Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for(int i=0; i<n; i++) {
        root = insert(root, arr[i]);
    }
    
    return root;
}


void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool SearchBST(Node* root, int key) {
    if(root == NULL) {
        return false;
    }

    if(root->data == key) {
        return true;
    }


   if(root->data > key) {
        return SearchBST(root->left, key);
    }
    else { // root->data < key
        return SearchBST(root->right, key);
    }
}


int main() {

    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};

    Node* root = buildBST(arr, 9);
    inOrder(root);
    cout << endl;

    cout << SearchBST(root, 11) << endl;

    return 0;
}