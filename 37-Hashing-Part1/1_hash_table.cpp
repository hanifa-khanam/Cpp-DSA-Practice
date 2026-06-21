#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val) {
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node() {
        if(next != NULL) {
            delete next;
        }
    }
};

class HashTable {
    int totalSize;
    int currSize;  // rehashing
    Node** table;

    int HashFunction(string key) {
        int idx = 0;
 
        for(int i=0; i<key.size(); i++) {
            idx = idx + (key[i] * key[i]);
        }

        return idx % totalSize;
    }

    void rehash() {
        Node** oldtable = table;
        int oldSize = totalSize;

        totalSize = 2*totalSize;
        currSize = 0;
        table = new Node*[totalSize];

        for(int i=0; i<totalSize; i++) {
            table[i] = NULL;
        }

        // copying old values
        for(int i=0; i<oldSize; i++) {
            Node* temp = oldtable[i];
            while(temp != NULL) {
                insert(temp->key, temp->val);
                temp = temp->next;
            }

            if(oldtable[i] != NULL) {
                delete oldtable[i];
            } 
        }
        delete[] oldtable;
    }
 
public:
    HashTable(int size=5) {
        totalSize = size;
        currSize = 0;

        table = new Node*[totalSize];

        for(int i=0; i<totalSize; i++) {
            table[i] = NULL;
        }
    }

    void insert(string key, int val) {  // O(1)
        int idx = HashFunction(key);

        Node* newNode = new Node(key, val);

        newNode->next = table[idx];
        table[idx] = newNode;
        
        currSize++;

        double lambda = currSize / static_cast<double>(totalSize);

        if(lambda > 0.7) {
            cout << "Processing Rehashing...\n";
            rehash();
            cout << "Rehashing complete..\n";
        }

    }

    void erase(string key) {
        // Step 1: find which bucket/index contains this key
        int idx = HashFunction(key);

        // step 2: start traversing the linked list at this index
        Node* temp = table[idx];

        // step 3: keep track of previous node
        // initially there is not previous node because temp is the first node
        Node* prev = NULL;

        // step 4: search through the chain
        while(temp != NULL) {

            // step 5: check if current node contains the key we want to delete
            if(temp->key == key) {

                // case 1: the node to delete is the first node of the chain
                if(prev == NULL) {
                    // move table[idx] to next node, the first node will be remove from the chain
                    table[idx] = temp->next;
                } 
                
                // case 2: the node is somewhere after the first node
                else {
                    // previous node now points to the next node
                    prev->next = temp->next;
                }

                // disconnet temp from the chain 
                // prevents desructor from deleting remaining nodes
                temp->next = NULL;

                // free the memory of the deleted node
                delete temp;

                // one element deleted from hashtable
                currSize--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }

        cout << "Key not found\n";
    }

    bool exists(string key) {
        int idx = HashFunction(key);

        Node* temp = table[idx];
        while(temp != NULL) {
            if(temp->key == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }


    int search(string key) {
        int idx = HashFunction(key);

        Node* temp = table[idx];
    
        while(temp != NULL) {
            if(temp->key == key) {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }

    void print() {
        for(int i=0; i<totalSize; i++) {
            cout << "idx" <<i<< "->";
            Node* temp = table[i];
            while(temp != NULL) {
                cout << "(" << temp->key << "," << temp->val << ") ->";
                temp = temp->next;
            }
            cout << endl;
        }
    }

};


int main() {
    HashTable ht;

    ht.insert("China", 250);
    ht.insert("Pakistan", 150);
    ht.insert("India", 150);
    ht.insert("Nepal", 10);

    ht.print();

    ht.erase("China");

    cout << "\nAfter erasing\n";
    ht.print();

    return 0;
}