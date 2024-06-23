//q-6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;
class person{
	private:
		string Personname,Personcountry;
		int Personage;
	public:
		setName(string name){
			this->Personname = name;
		}
		getName(){
			cout<<"Person name is : "<<this->Personname<<endl;
		}
		setAge(int age){
			this->Personage = age;
		}
		getAge(){
			cout<<"Person age is : "<<this->Personage<<endl;
		}
		setCountry(string country){
			this->Personcountry = country;
		}
		getCountry(){
			cout<<"Person's country is : "<<this->Personcountry<<endl;
		}
};
main(){
	person pr;
	pr.setName("Vinay Jadav");
	pr.setAge(20);
	pr.setCountry("India");
	pr.getName();
	pr.getAge();
	pr.getCountry();
		
}
