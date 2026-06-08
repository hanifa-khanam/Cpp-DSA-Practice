#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {

    // descending order
    priority_queue<int> pq;

    pq.push(5);
    pq.push(10);
    pq.push(9);
    pq.push(7);

    while(!pq.empty()) {
        cout << "top: " << pq.top() << endl;
        pq.pop();
    }

    // ascending order
    priority_queue<string, vector<string>, greater<string>> q;
    
    q.push("helloworld");
    q.push("apnacollege");
    q.push("c++");
    q.push("alpha");

    while(!q.empty()) {
        cout << "top: " << q.top() << endl;
        q.pop();
    }

    return 0;
}