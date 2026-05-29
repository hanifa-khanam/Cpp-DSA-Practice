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

void preorder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void getInorder(Node* root, vector<int>& arr) {
    if(root == NULL) {
        return;
    }

    getInorder(root->left, arr);
    arr.push_back(root->data);
    getInorder(root->right, arr);
}

Node* BSTfromSortedVec(vector<int>& arr, int start, int end) {
    if(start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;

    Node* root = new Node(arr[mid]);
    root->left = BSTfromSortedVec(arr, start, mid-1);
    root->right = BSTfromSortedVec(arr, mid+1, end);

    return root;
}

Node* balanceBST(Node* root) {
    // get inorder seq
    vector<int> arr;
    getInorder(root, arr);

    return BSTfromSortedVec(arr, 0, arr.size()-1);
}

int main() {

    // skewed BST
    Node* root = new Node(6);

    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    

    cout << "Before balancing: ";
    preorder(root);
   
    root = balanceBST(root);

    cout << "\nAfter balancing: ";
    preorder(root);
    cout << endl;

    return 0;
}