#include <iostream>
using namespace std; // or use std::cout

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
}

int main() {
    int sales = 95000;
    const double stateTaxRate = .04;
    const double countyTaxRate = .02;
    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;
    double totalTax = stateTax + countyTax;

    cout << "Sales: $" << sales << endl << "State Tax: $" << stateTax << endl << "County Tax: $" << countyTax << endl << "Total Tax: $" << totalTax;
    return 0;
}

int main () {
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello " << name;
    return 0;
}*/