#include <iostream>
#include <vector>
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

Node* insert(Node* root,int val) {
    if(root == NULL) {
        root = new Node(val);
        return root;
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
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

void printPath(vector<int> &path) {

    for(int i=0; i<path.size(); i++) {
        cout << path[i] << " -> ";
    }
    cout << endl;
}

void pathHelper(Node* root, vector<int> &path) {
    if(root == NULL) {
        return;
    }

    // add node
    path.push_back(root->data);
    
    // leaf node
    if(root->left == NULL && root->right == NULL) {
        printPath(path);
    }
    else {
        pathHelper(root->left, path);
        pathHelper(root->right, path);
    }
    
    path.pop_back();
}

void rootToLeafPath(Node* root) {
    vector<int> path;
    pathHelper(root, path);
}



int main() {

    int arr[6] = {8, 5, 3, 10, 11, 6};

    Node* root = buildBST(arr, 6);
    
    inOrder(root);
    cout << endl;

    rootToLeafPath(root);


    return 0;
}