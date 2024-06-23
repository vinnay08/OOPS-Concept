//q-4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include<iostream>
using namespace std;
class circle{
	
	private:
		float r;
	public:
		Calculatearea(){
			float r;
			cout<<"Enter radius : ";
			cin>>r;
			float area = 3.14 * r * r;
			cout <<"\nArea of circle is : "<< area;
		}
		Calculatecircumference(){
			float r;
			cout<<"Enter radius : ";
			cin>>r;
			float circumference = 2 * 3.14 * r;
			cout <<"\nCircumference of circle is : "<< circumference;
		}
};
main(){
	circle cr;
	cr.Calculatearea();
	cout<<"\n";
	cr.Calculatecircumference();
}
