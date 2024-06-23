#include<iostream>
using namespace std;
class cal{
	public:
		Add(int a,int b){
//			int a,b;
//			cout<<"Enter A : ";
//			cin>>a;
//			
//			cout<<"\nEnter B : ";
//			cin>>b;
			
			cout<<"\nAddition : "<<a+b;
		}
		Sub(int a,int b){
//			int a,b;
//			cout<<"Enter A : ";
//			cin>>a;
//			
//			cout<<"\nEnter B : ";
//			cin>>b;
			
			cout<<"\nSubstraction : "<<a-b;
		}
		Mul(int a,int b){
//			int a,b;
//			cout<<"Enter A : ";
//			cin>>a;
//			
//			cout<<"\nEnter B : ";
//			cin>>b;
			
			cout<<"\nMultiplication : "<<a*b;
		}
		Div(int a,int b){
//			int a,b;
//			cout<<"Enter A : ";
//			cin>>a;
//			
//			cout<<"\nEnter B : ";
//			cin>>b;
			
			cout<<"\nDivison : "<<float(a/b);
		}
		Mod(int a,int b){
//			int a,b;
//			cout<<"Enter A : ";
//			cin>>a;
//			
//			cout<<"\nEnter B : ";
//			cin>>b;
			
			cout<<"\nModulo : "<<a%b;
		}
};
main(){
	cal obj;
	int x,y;
	cout<<"Enter X : ";
	cin>>x;
	cout<<"Enter Y : ";
	cin>>y;
	
	obj.Add(x,y);
	obj.Sub(x,y);
	obj.Mul(x,y);
	obj.Div(x,y);
	obj.Mod(x,y);
	
//	obj.Add();
//	obj.Sub();
//	obj.Mul();
//	obj.Div();
//	obj.Mod();
}
