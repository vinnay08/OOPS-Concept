//Q-11. Write a program to calculate the area of circle, rectangle and 
//triangle using Function Overloading 
//Rectangle: Area * breadth 
//Triangle: ½ *Area* breadth 
//Circle: Pi * Area *Area 

#include<iostream>
using namespace std;
class Area{
	public:
		float calArea(float Length,float breadth){
			return Length*breadth;
		}
		float calArea(float height,float base,float extra){
			return 0.5 * base * height;
		}
		float calArea(float radius){
			return 3.14 * radius * radius;
		}
};
main(){
	Area a;
	float length, breadth, base, height, radius;
	
	cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Area of rectangle: " << a.calArea(length, breadth) << endl;
    
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Area of triangle: " << a.calArea(base, height, 0) << endl;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << a.calArea(radius) << endl;
    
	

}
