//Q-1. Write a program to find the multiplication values and the cubic values 
//using inline function 

#include <iostream>
using namespace std;

class Cal {
public:
    inline Multiplication(int a, int b) {
        return a * b;
    }

    inline Cube(int c) {
        return c * c * c;
    }
};

main() {
    Cal obj;
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Multiplication Result: " << obj.Multiplication(a, b) << endl;

    int c;
    cout << "Enter C for Cube: ";
    cin >> c;
    cout << "Cube Result: " << obj.Cube(c) << endl;

}
