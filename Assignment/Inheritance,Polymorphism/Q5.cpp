//Q-5 Assume that the test results of a batch of students are stored in three 
//different classes. Class Students are storing the roll number. Class Test 
//stores the marks obtained in two subjects and class result contains the 
//total marks obtained in the test. The class result can inherit the details 
//of the marks obtained in the test and roll number of students. 
//(Multilevel Inheritance)

#include<iostream>
using namespace std;
class students{
		
	public:
		int roll;
		rollno(){
			cout<<"Enter Roll no : ";
			cin>>roll;
			
		}
};
class Test:public students{
		
	public:
		int marks[2],i;
		mark(){
		for(i=0;i<2;i++){
      		cout<<"Enter the marks : "<<endl;
            cin>>marks[i];
        	}
    	}
        
};
class result:public Test{
	public:
		int total;
		cal(){
			total=marks[0]+marks[1];
			
		}
		display(){
			cout<<"Roll no is : "<<roll<<endl;
			for(i=0;i<2;i++){
            cout<<"Marks is : "<<marks[i]<<endl;
        	}
        	cout<<"Total marks : "<<total<<endl;
		}
		
};
main(){
	result r;
	r.rollno();
	r.mark();
	r.cal();
	r.display();
}
