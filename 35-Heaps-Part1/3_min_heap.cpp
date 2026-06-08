#include <iostream>
#include <vector>
using namespace std;


class Heap {
    vector<int> vec;

    public:
    void push(int val) {
        vec.push_back(val);

        // child index
        int x = vec.size()-1;
        // parent index
        int parI = (x-1)/2;

        while(parI >=0 && vec[x] < vec[parI]) {
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }
    }


    void heapify(int i) {
        if(i >= vec.size()) {
            return;
        }

        int left = 2*i + 1;
        int right = 2*i + 2;

        int size = vec.size();
        int minIdx = i;

        if(left < size && vec[left] < vec[minIdx]) {
           minIdx = left;
        }

        if(right < size && vec[right] < vec[minIdx]) {
            minIdx = right;
        }

       
        if(minIdx != i) {  // swapping with child node
            swap(vec[i], vec[minIdx]);
            heapify(minIdx);
        }

    }


    void pop() {
        if(empty()) {
            cout << "Heap is empty\n";
            return;
        }

        swap(vec[0], vec[vec.size()-1]);

        vec.pop_back();

        heapify(0);
    }

    int top() {
        if(empty()) {
            cout << "Heap is empty\n";
            return -1;
        }
        return vec[0];
    }

    bool empty() {
        return vec.size() == 0;
    }

    void display() {
        if(empty()) {
            cout << "Emtpy Heap\n";
            return;
        }

        for(int i=0; i<vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap heap;


    
    heap.push(100);
    heap.push(50);
    heap.push(40);
    heap.push(20);
    heap.push(10);
    heap.push(30);

    cout << "Before deleting: " << endl;
    heap.display();

    heap.pop();

    cout << "After deleting: " << endl;
    heap.display();
    


    return 0;
}

