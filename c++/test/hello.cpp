#include <iostream>
using namespace std;

/*int main() {
    cout << "hello lucy!";
}*/

int main() {
    int a = 1;
    int b = 2;
    // swap a and b values
    int temp=a;
    a=b;
    b=temp;
    std::cout << a << std::endl << b;
    return 0;
}

/*int main() {
    // const variables cannot be modified
    const double pi = 3.14;
    // pi = 0; -> does not work
    return 0;
}

int main() {
    int x = 10;
    int y = 20;
    std::cout << "x = " << x << std::endl 
    << "y = " << y;
    return 0;
}*/