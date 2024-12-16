#include <iostream>
#include <queue>
using namespace std;

/* 
    ------------------------QUEUES--------------------------
    FIFO -> First In, First Out
    Visual: a line to checkout at the cash register
    push(): adds to the back of the queue
    pop(): removes element at the front of the queue
    front(): retrieves element at the front w/o removing it
    back(): retrieves element at the back w/o removing it
    size(): retrives the amount of elements in a queue
    empty(): returns true (1) if empty, false(0) otherwise
*/

int main() {
    queue<string> coolQueue;
    // push() add elements to the queue
    coolQueue.push("Lucy"); // head of queue (front/first element)
    coolQueue.push("John");
    coolQueue.push("Jane");
    coolQueue.push("Bob"); // tail of queue (back/last element)

    cout << coolQueue.front() << endl; // prints Lucy
    cout << coolQueue.back() << endl; // print Bob

    // changes front and back elements
    // coolQueue.front() = "Aiden";
    // coolQueue.back() = "Mike";

    coolQueue.pop(); // removes front element
    cout << "New front after pop(): " << coolQueue.front() << endl; // prints John
    cout << "New size after pop(): " << coolQueue.size() << endl;
    cout << "Empty?: " << coolQueue.empty(); // 1 if empty, 0 otherwise
    return 0;
}