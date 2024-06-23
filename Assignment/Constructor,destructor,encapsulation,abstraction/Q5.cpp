//Q-5. Write a C++ program to create a class called Triangle that has private 
//member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class Triangle{
	private:
		int s1,s2,s3;
	public:
		Find(){
		cout<<"Enter Side 1:";
		cin>>s1;
		cout<<"Enter Side 2:";
		cin>>s2;
		cout<<"Enter Side 3:";
		cin>>s3;
		
		if(s1==s2 && s2==s3 ){
			cout<<"Triangle is Equilateral";
		}
		else if(s1==s2 || s2==s3 || s1==s3){
			cout<<"Triangle is Isosceles";
		}
		else{
			cout<<"Triangle is scalene";
		}
	}
};
main(){
	Triangle tr;
	tr.Find();
}
