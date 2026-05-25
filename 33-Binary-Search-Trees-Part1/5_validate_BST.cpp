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

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool validateHelper(Node* root, Node* min, Node* max) {
    if(root == NULL) {
        return true;
    }

    if(min != NULL && root->data <= min->data) {
        return false;
   }

    if(max != NULL && root->data >= max->data) {
        return false;
   }

    return validateHelper(root->left, min, root) && validateHelper(root->right, root, max);
}

bool validBST(Node* root) {
    return validateHelper(root, NULL, NULL);
}

int main() {

    // manually creating invalid BST
    Node* root = new Node(6);
    
    root->left = new Node(2);
    root->right = new Node(5); // invalid

    root->left->left = new Node(1); 
    root->left->right = new Node(4); 
    

    cout << "InOrder Traversal of BST:\n";
    inOrder(root);
    cout << endl;

    cout << "Is Valid BST? " << (validBST(root)? "yes" : "no") << endl;

    return 0;
}



