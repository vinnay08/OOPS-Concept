//Q-13. Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		friend class B;
};
class B{
	public:
		max(A& t){
		
		cout<<"Enter A : ";
		cin>>t.a;
		cout<<"Enter B : ";
		cin>>t.b;
		if(t.a==t.b){
			cout<<"Both are Equal";
		}
		else if(t.a>t.b){
			cout<<"A is Greatest";
		}
		else{
			cout<<"B is Greatest";
		}
	}
};
main(){
	A m1;
	B m2;
	m2.max(m1);
}
