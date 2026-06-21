#include <iostream>
#include <unordered_set>
using namespace std;


int main(){

    unordered_set<int> numbers;

    // INSERTION

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);

    // Duplicate ignored
    numbers.insert(10);


    // SEARCH
    if(numbers.find(20)!=numbers.end()){
        cout<<"20 exists\n";
    }


    // TRAVERSAL
    cout<<"Numbers:\n";
    for(int x:numbers){
        cout<<x<<" ";
    }

    // ERASE
    numbers.erase(30);

    cout<<"\nAfter erase:\n";
    for(int x:numbers){
        cout<<x<<" ";
    }

    // SIZE
    cout<<"\nSize: ";
    cout<<numbers.size();

    return 0;
}