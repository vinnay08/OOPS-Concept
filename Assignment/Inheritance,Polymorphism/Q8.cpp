//Q-8. Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading

#include<iostream>
using namespace std;
class Mathoperation{
	public:
		Add(int a,int b){
			cout<<"Addition : "<<a+b<<endl;
		}
		Add(double a,double b){
			cout<<"Addition : "<<a+b<<endl;
		}
		Sub(int a,int b){
			cout<<"Subtraction : "<<a-b<<endl;
		}
		Sub(double a,double b){
			cout<<"Subtraction : "<<a-b<<endl;
		}
		Mul(int a,int b){
			cout<<"Multiplication : "<<a*b<<endl;
		}
		Mul(double a,double b){
			cout<<"Multiplication : "<<a*b<<endl;
		}
		Div(int a,int b){
			cout<<"Divison : "<<a/b;
		}
		Div(double a,double b){
			cout<<"Divison : "<<a/b;	
		}
};

main(){
	Mathoperation mo;
	cout<<"-------------Int numbers-------------"<<endl;
	mo.Add(3,4);
	mo.Sub(5,3);
	mo.Mul(5,9);
	mo.Div(15,3);
	cout<<"-------------Double numbers-------------"<<endl;
	mo.Add(7,4);
	mo.Sub(5,1);
	mo.Mul(5,8);
	mo.Div(15.0,2.0);
}
