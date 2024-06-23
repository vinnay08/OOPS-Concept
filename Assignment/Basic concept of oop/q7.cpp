//q-5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length,width;
	public:
		calArea(){
			cout<<"Enter length : ";
			cin>>length;
			
			cout<<"\nEnter width : ";
			cin>>width;
			
			float area = length * width;
			
			cout<<"\nArea of Rectangle : "<<area;
		}
		calPerimeter(){
			cout<<"\nEnter length : ";
			cin>>length;
			
			cout<<"\nEnter width : ";
			cin>>width;
			
			float perimeter = 2*(length+width);
			
			cout<<"\nPerimeter of Rectangle : "<<perimeter;
		}
};
main(){
	Rectangle rt;
	rt.calArea();
	rt.calPerimeter();
}
