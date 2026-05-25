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

void InOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

Node* Insert(Node* root, int val) {
    if(root == NULL) {
        root = new Node(val);
        return root;
    }

    if(val < root->data) {
        root->left = Insert(root->left, val);
    }
    else {
        root->right = Insert(root->right, val);
    }

    return root;
}

Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for(int i=0; i<n; i++) {
         root = Insert(root, arr[i]);
    }

    return root;
}

Node* InOrderSuccessor(Node* root) {
    while(root->left != NULL) {
        root = root->left;
    }

    return root;
}

Node* deleteNode(Node* root, int val) {
    if(root == NULL) {
        return NULL;
    }
    
    // SEARCH
    if(val < root->data) {
        // LeftSubtree
        root->left = deleteNode(root->left, val);
    }
    else if(val > root->data) {
        // RightSubtree
        root->right = deleteNode(root->right, val);
    }
    else {           
        // Found node
        // CASE 1: leaf node
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // CASE 2: one child
        // left child
        if(root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // right child
        if(root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // CASE 3: two children
        Node* IOS = InOrderSuccessor(root->right);
        root->data = IOS->data;
        root->right = deleteNode(root->right, IOS->data);
    }

    return root;
}


int main() {
    
    int arr[7] = {80, 40, 30, 50, 20, 70, 60};

    Node* root = buildBST(arr, 7);
    InOrder(root);
    cout << endl;

    root = deleteNode(root, 50);
    InOrder(root);
    cout << endl;

    return 0;
}