//Q-3. Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member 
//functions to get and set these variables.

#include<iostream>
using namespace std;
class Car{
	private:
		string companyname,modelname;
		int y;
	public:
		setCompany(string company){
			this->companyname = company;
		}
		getCompany(){
			cout<<"Company : "<<this->companyname<<endl;
		}
		setModel(string model){
			this->modelname = model;
		}
		getModel(){
			cout<<"Model : "<<this->modelname<<endl;
		}
		setYear(int year){
			this->y=year;
		}
		getYear(){
			cout<<"Year of Model :"<<this->y<<endl;
		}
};
main(){
	Car car;
	car.setCompany("Tata");
	car.setModel("Nexon");
	car.setYear(2024);
	car.getCompany();
	car.getModel();
	car.getYear();	
} 
