//Q-10. Write a program to concatenate the two strings using Operator Overloading 

#include <iostream>
#include <string>
using namespace std;

class joint {
    public:
        string a, b;

        Add(string x, string y) {
            this->a = x;
            this->b = y;
        }

    	Concatenat() {
            string result = a + b;
            cout << "Concatenate string: " << result << endl;
        }
};

main() {
    joint jt;
    jt.Add("Hello ", "World!");
    jt.Concatenat();
    
}


