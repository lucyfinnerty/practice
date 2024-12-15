#include <iostream>
#include <stack>
using namespace std;

/*
    --------------------STACKS---------------------
    LIFO -> Last In, First Out
    Visual: a tower of video games stacked up on one another
    push(): adds to the top of the stack
    pop(): removes element on the very top of the stack
    top(): retrieves element on the very top of the stack w/o removing it
    size(): retrives the amount of elements in a stack
    empty(): returns true is empty, false otherwise
*/


// helper function to print the stack
template <typename T>
void printStack(stack<T> s) { // Pass by value to preserve original stack
    cout << "[";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
        if (!s.empty()) cout << ", "; // Add comma except for the last element
    }
    cout << "]" << endl;
}

stack<string> coolStack; // this is my cool stack
void pushCoolStack();
void popCoolStack();
int main() {
    //pushCoolStack();
    popCoolStack();
    return 0;
}
// -----------------PUSH()----------------------
void pushCoolStack() {

    // push() adds games on top of one another
    coolStack.push("Minecraft"); // first in (bottom of the stack)
    coolStack.push("Skyrim");
    coolStack.push("DOOM");
    coolStack.push("Borderlands");
    coolStack.push("FFVII"); // last in (top of the stack)
    cout << "Size: " << coolStack.size() << endl;

    /*
    prints stack:
        FFVII
        Borderlands
        DOOM
        Skyrim
        Minecraft
    */
    printStack(coolStack);
}
// -----------------POP() AND TOP()----------------------
void popCoolStack() {
    coolStack.push("Minecraft"); // first in (bottom of the stack)
    coolStack.push("Skyrim");
    coolStack.push("DOOM");
    coolStack.push("Borderlands");
    coolStack.push("FFVII"); // last in (top of the stack)

    coolStack.pop(); // FFVII last in, so the first to be removed
    coolStack.pop(); // Borderlands removed
    coolStack.pop(); // DOOM removed
    
    printStack(coolStack); // [Skyrim, Minecraft]
    cout << "Size: " << coolStack.size() << endl; // 2
    cout << "Top: " << coolStack.top() << endl; // Skyrim
}