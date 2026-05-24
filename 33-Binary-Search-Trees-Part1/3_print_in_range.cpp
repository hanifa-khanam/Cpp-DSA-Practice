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
        root->left = insert(root->left, val);;
    }
    else {
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

void printInRange(Node* root, int start, int end) {
    if(root == NULL) {
        return;
    }

    // case : 1
    if(start <= root->data && root->data <= end) {
        // inorder
        printInRange(root->left, start, end);
        cout << root->data << " ";
        printInRange(root->right, start, end);
    }
    // case : 2
    else if(root->data < start) {
        printInRange(root->right, start, end);
    }
    // case : 3
    else {      // root->data > start
        printInRange(root->left, start, end);
    }
}

int main() {

    int arr[10] = {8, 3, 5, 20, 11, 13, 9, 7, 6, 4};

    Node* root = buildBST(arr, 10);
    inOrder(root);
    cout << endl;

    printInRange(root, 5, 12);

    cout << endl;


    return 0;
}