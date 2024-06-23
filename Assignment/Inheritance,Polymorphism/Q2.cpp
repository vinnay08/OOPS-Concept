//Q-2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;
class calculate{
	public:
		int w,l,Area;
		cal(){
			cout<<"Enter Width : ";
			cin>>w;
			cout<<"Enter Length : ";
			cin>>l;
			Area = w*l;
			cout<<"Area of Ractangle : "<<Area;
		}
};
class Area:public calculate{
	
};
main(){
	Area obj;
	obj.cal();
}
