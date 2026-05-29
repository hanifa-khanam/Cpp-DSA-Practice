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

Node* buildBSTfromSorted(int arr[], int start, int end) {
    if(start > end) {
        return NULL;
    }

    int mid = start + (end - start) / 2;
    Node* curr = new Node(arr[mid]);

    curr->left = buildBSTfromSorted(arr, start, mid-1);
    curr->right = buildBSTfromSorted(arr, mid+1, end);

    return curr;
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

    int arr[7] = {3, 4, 5, 6, 7, 8, 9};

    Node* root = buildBSTfromSorted(arr, 0, 6);
    preOrder(root);
    cout << endl;

    return 0;
}