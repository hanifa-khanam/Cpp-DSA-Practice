#include <iostream>
#include <set>
using namespace std;


int main(){

    set<int> numbers;

    // INSERTION
    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(10);
    numbers.insert(50);

    // Traversal
    cout<<"Numbers:\n";
    for(int x:numbers){
        cout<<x<<" ";
    }

    // SEARCH
    if(numbers.find(20)!=numbers.end()){
        cout<<"\n20 Found";

    }

    // ERASE
    numbers.erase(10);

    cout<<"\nAfter deleting:\n";
    for(int x:numbers){
        cout<<x<<" ";
    }

    // SIZE
    cout<<"\nSize:";
    cout<<numbers.size();

    return 0;
}