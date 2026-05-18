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

static int idx = -1;

Node* buildTree(vector<int>&  vec) {
    idx++;

    if(vec[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(vec[idx]);
    root->left = buildTree(vec);
    root->right = buildTree(vec);

    return root;
}

bool isIdentical(Node* root, Node* subRoot) {

    if(root == NULL && subRoot == NULL) {
        return true;
    } 
    else if(root == NULL || subRoot == NULL) {
        return false;
    }

    if(root->data != subRoot->data) {
       return false;
    }

    return  isIdentical(root->left, subRoot->left)
            &&
            isIdentical(root->right, subRoot->right);
}


bool isSubtree(Node* root, Node* subRoot) {
    if(root == NULL && subRoot == NULL) {
        return true;
    }
    else if(root == NULL || subRoot == NULL) {
        return false;
    }

    if(root->data == subRoot->data) {
        if(isIdentical(root, subRoot)) {
            return true;
        }
    }

    return isSubtree(root->left, subRoot)
           ||
           isSubtree(root->right, subRoot);
}

int main() {

    vector<int> vec1 = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1,};

    vector<int> vec2 = {2, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(vec1);

    idx = -1;

    Node* subRoot = buildTree(vec2);

    cout << "Is Identical? " << (isIdentical(root, subRoot)? "Yes" : "No") << endl;

    cout << "Is SubTree? " << (isSubtree(root, subRoot)? "Yes" : "No") << endl;




    return 0;
}