#include <iostream>
using namespace std;

int main() {
    // pointers = variable that stores a memory address of another variable
    //             >> sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Lucy";
    int age = 20;
    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"}; // arays are pointers

    string* pName = &name;
    int* pAge = &age;
    string* pFreePizzas = freePizzas;

    cout << *pName << endl; // prints Lucy
    cout << *pAge << endl; // prints 20
    cout << *pFreePizzas << endl; // prints first reference (pizza 1)
    cout << *(pFreePizzas + 2) << endl; // prints pizza 3
    cout << pFreePizzas << endl; // prints memory address
    return 0;
}