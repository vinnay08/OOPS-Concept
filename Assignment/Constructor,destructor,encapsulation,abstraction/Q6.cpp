//Q-6. Write a C++ program to implement a class called Employee that has 
//private member variables for name, employee ID, and salary. Include 
//member functions to calculate and set salary based on employee 
//performance. Using of constructor 

#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int employeeID;
		double salary;
		char a;
	public:
		Employee(){
			cout<<"Enter Employee Name: ";
			cin>>name;
			cout<<"Enter Impoyee ID: ";
			cin>>employeeID;
			cout<<"Enter Salary: ";
			cin>>salary;
			cout<<"Enter Grade: ";
			cin>>a;
			
			if(a=='a'){
				salary = salary * 2;
				cout<<"New Increment Salary :"<<salary<<endl;
			}
			else if(a=='b'){
				salary = salary * 1.5;
				cout<<"New Increment Salary :"<<salary<<endl;
			}
			else if(a=='c'){
				salary = salary * 1;
				cout<<"New Increment Salary :"<<salary<<endl;
			}
			else{
				cout<<"Invalid Grade!";
			}
		}
};
main(){
	Employee em;	
}
