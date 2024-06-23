//Q-12. Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;
class A{
	private:
		int a,b,temp;
		friend class B;
};
class B{
	public:
		swap(A& t){
			cout<<"Enter A : ";
			cin>>t.a;
			cout<<"Enter B : ";
			cin>>t.b;
			cout<<"Before swap a= "<<t.a<<" b= "<<t.b<<endl;
			t.a=t.a+t.b;
			t.b=t.a-t.b;
			t.a=t.a-t.b;
			cout<<"After swap a= "<<t.a<<" b= "<<t.b<<endl;
		}
};

main(){
	A s1;
	B s2;
	s2.swap(s1);
} 
