#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct ComparePair {
    bool operator() (
        const pair<string, int> &p1,
        const pair<string, int> &p2
    ) const {
        return p1.second < p2.second;
    } 
};


int main() {

    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;

    pq.push(make_pair("aman", 500));
    pq.push(make_pair("hamza", 1000));
    pq.push(make_pair("chetan", 100));

    while(!pq.empty()) {
        cout << "top = " << pq.top().first << " , " << pq.top().second << endl;
        pq.pop();
    }


    return 0;
}