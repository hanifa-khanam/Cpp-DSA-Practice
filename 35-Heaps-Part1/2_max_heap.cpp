#include <iostream>
#include <vector>
using namespace std;

class Heap {
    vector<int> vec;  // max heap

    public:
        void push(int val) {
            vec.push_back(val);

            // fix heap
            int x = vec.size()-1; // child Index
            int parI = (x-1)/2;

            while(parI >= 0 && vec[x] > vec[parI]) {
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
            int maxIdx = i;

            if(left < size && vec[left] > vec[maxIdx]) {
                maxIdx = left;
            }

            if(right < size && vec[right] > vec[maxIdx]) {
                maxIdx = right;
            }

            
            if(maxIdx != i) {  // swapping with child node
                swap(vec[i], vec[maxIdx]);
                heapify(maxIdx);
            }
        }

        void pop() {
            if(empty()) {
                cout << "Heap is empty\n";
                return;
            }

            // step : 1
            swap(vec[0], vec[vec.size()-1]);

            // step : 2
            vec.pop_back();

            // step : 3
            heapify(0);    // O(logn)

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


