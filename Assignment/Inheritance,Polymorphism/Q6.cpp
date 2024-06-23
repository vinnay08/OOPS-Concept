//Q-6. Write a C++ Program to show access to Private Public and Protected 
//using Inheritance 

#include<iostream>
using namespace std;
class Base{
	private:
		int p1=2;
	public:
	    int p2=3;
	protected:
		int p3=5;
};
class Derived:public Base{
	public:
		getpvt(){
			 cout << "Private member cannot be accessed directly" << endl;
		}
		getpub(){
			cout<<"Public is Accessed : "<<p2<<endl;
		}
		getpro(){
			cout<<"Protected is Accessed : "<<p3<<endl;
		}
};
main(){
	Derived dv;
	dv.getpvt();
	dv.getpub();
	dv.getpro();				
}
