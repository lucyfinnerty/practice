#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<double> pq;
    pq.push(3.6);
    pq.push(2.4);
    pq.push(4.0);
    pq.push(1.6);
    pq.push(2.9);

    while(!pq.empty()) {
        cout << pq.top() << endl; // prints 4 first bc it's the largest number (highest priority)
        pq.pop(); // remove so next top() element can be printed
    }
    cout << endl;
}