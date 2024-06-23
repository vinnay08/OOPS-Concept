//Q-4.Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
using namespace std;
class student
{
    public:
    string a;
    int roll;
    sdetails()
    {
        cout<<"Enter the name :";
        cin>>a;
        cout<<"Enter the roll.no : ";
        cin>>roll;
    }
};
class mark
{
    public:
    int mark[5],i;
	smarks()
    {
        cout<<"Enter the marks : ";
        for(i=0;i<5;i++)
        {
            cin>>mark[i];
        }
    }
};
class Marksheet:public student,public mark
{
    public:
    int t;
    float avg;
    cal()
    {
        t=mark[0]+mark[1]+mark[2]+mark[3]+mark[4];
        avg=t/5;
    }
    display()
    {
        cout<<"Name : "<<a<<endl;
        cout<<"Roll.no : "<<roll<<endl;
        cout<<"Marks entered : ";
        for(i=0;i<5;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<endl;
        cout<<"Total marks : "<<t<<endl;
        cout<<"Average : "<<avg<<endl;
    }
};
main()
{
    cout<<"\t\tStudent mark list using multiple inheritance"<<endl;
    cout<<"\t\t____________________________________________"<<endl;
    Marksheet ms;
    ms.sdetails();
    ms.smarks();
    ms.cal();
    ms.display();
    
}
