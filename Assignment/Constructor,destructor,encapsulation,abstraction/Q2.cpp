//Q-2. Write a program of Addition, Subtraction, Division, Multiplication 
//using constructor. 

#include<iostream>
using namespace std;
class Add{
	public:
		Add(){
			int a,b;
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			cout<<"Addition : "<<a+b<<endl;			 
		}
};
class Sub{
	public:
		Sub(){
			int a,b;
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			cout<<"Subtraction : "<<a-b<<endl;			 
		}
};
class Mul{
	public:
		Mul(){
			int a,b;
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			cout<<"Multiplication : "<<a*b<<endl;			 
		}
};
class Div{
	public:
		Div(){
			int a,b;
			cout<<"Enter A: ";
			cin>>a;
			cout<<"Enter B: ";
			cin>>b;
			cout<<"Divison : "<<a/b<<endl;			 
		}
};

main(){
	Add add;
	Sub sub;
	Mul mul;
	Div div;
}
