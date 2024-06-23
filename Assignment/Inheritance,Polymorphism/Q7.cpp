//Q-7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance 

#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Class A Constructor"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"Class B Constructor"<<endl;
		}
};
class C:public B{
	public:
		C(){
			cout<<"Class C Constructor";
		}
};
main(){
	C c;
	
}
