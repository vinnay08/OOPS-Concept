//Q-3 Create a class person having members name and age. Derive a class 
//student having member percentage. Derive another class teacher 
//having member salary. Write necessary member function to initialize, 
//read and write data. Write also Main function (Multiple Inheritance) 

#include <iostream>
using namespace std;

class person {
    private:
        string s;
        int age;
    public:
        readdata() {
            cout << "Enter Name: ";
            cin >> s;
            cout << "Enter Age: ";
            cin >> age;
        }
        writedata() {
            cout << "Name: " << s << endl;
            cout << "Age: " << age << endl;
        }
};

class student : public person {
    private:
        float percentage;
    public:
        readdata() {
            person::readdata();
            cout << "Enter Percentage: ";
            cin >> percentage;
        }
        writedata() {
            person::writedata();
            cout << "Percentage: " << percentage << endl;
        }
};

class teacher : public person {
    private:
        int salary;
    public:
        readdata() {
            person::readdata();
            cout << "Enter Salary: ";
            cin >> salary;
        }
        writedata() {
            person::writedata();
            cout << "Salary: " << salary << endl;
        }
};

main() {
	student st;
    cout << "Enter details for student:\n";
    st.readdata();
    cout << "\nStudent details:\n";
    st.writedata();
    cout << endl;
    
	teacher tr;
    cout << "Enter details for teacher:\n";
    tr.readdata();
    cout << "\nTeacher details:\n";
    tr.writedata();
    cout << endl;

    
}
