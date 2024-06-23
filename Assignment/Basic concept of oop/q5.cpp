/*q-5.  Define a class to represent a bank account. Include the following members: 
=>Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 
=>Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance
*/

#include<iostream>
using namespace std;
class BankAc{
	public:
		int balance;
		string name;
		string actype;
		int acnum;
		
		Bankdetails(int balance){
			this->balance = balance;
			this->name = name;
			this->actype = actype;
			this->acnum = acnum;
		}
		
		deposit(double depo){
			if(depo>0){
				balance += depo;
				cout<<"Deposited amount :"<<depo<<endl;
			}
		}
		
		withdraw(double wd){
			if(wd>0 && wd <= balance){
				balance -= wd;
				cout<<"Withdrawn amount :"<<wd<<endl;
			}
		}
		display(){
			cout<<"Depositer name : "<<name<<endl;
			cout<<"Balance : "<<balance;
		}
};
main(){
	string n,acty;
	int acnum;
	
	cout<<"Enter Name : ";
	cin>>n;
	cout<<"Account type : ";
	cin>>acty;
	cout<<"Account number : ";
	cin>>acnum;
	
	int d,wd;
	
	cout<<"Enter deposite amount : ";
	cin>>d;
	
	cout<<"Enter withdraw amount : ";
	cin>>wd;
	
	BankAc obj;
	obj.Bankdetails(10000);
	obj.deposit(d);
	obj.withdraw(wd);
	obj.display();
}
