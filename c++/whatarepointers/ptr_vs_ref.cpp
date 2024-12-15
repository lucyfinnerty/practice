#include <iostream>
using namespace std;

int main() {
    int var = 7; // address is 0xA
    int foo = 21; // address is 0xB

    int* ptr; // pointer by default is 0x0
    ptr = &var; // ptr is the address of var 0xA
    ptr = &foo; // ptr is the address of foo 0xB
    cout << *ptr << endl; // prints 21
    cout << ptr << endl; // prints memory address

    int& ref = var; // reference is 7    *Note: ref cannot point to foo now
    ptr = &ref; // same as ptr = &var bc they have the same address (var == ref)
    cout << ref << endl; // prints 7
    cout << &ref << endl; // prints memory address
}