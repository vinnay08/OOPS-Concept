//Q-1. Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template<class A>
swapValues(A &a, A &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

main() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    
    double x = 5, y = 6;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

}
