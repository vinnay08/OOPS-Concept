//Q-7. Write a C++ program to implement a class called Date that has private 
//member variables for day, month, and year. Include member functions to 
//set and get these variables, as well as to validate if the date is valid. 

#include <iostream> 
using namespace std;

class Date {
  private: 
    int day; 
    int month;
    int year; 

  public:
    Date(int d, int m, int y){
		this->day = d;
		this->month = m;
		this->year = y;
	}
	setDate(int d, int m, int y) {
      day = d;
      month = m; 
      year = y; 
    }

    int getDay(){
      return day; 
    }

    int getMonth(){
      return month; 
    }

    int getYear(){
      return year; 
    }

    bool isValidDate(){
      
      if (month < 1 || month > 12){
      	return false;
	  }
        

      if (day < 1 || day > 31){
      	return false;
      	
	  }
	 
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30){
      	return false;
	  }
        
      if (month == 2) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          if (day > 29)
            return false;
        } else {
          if (day > 28)
            return false;
        }
      }

      
      return true;
    }
};

main() {
  Date date(0, 0, 0);

  
  int day, month, year; 
  cout << "Input day: "; 
  cin >> day;
  cout << "Input month: ";
  cin >> month; 
  cout << "Input year: ";
  cin >> year;

  date.setDate(day, month, year);

  
  cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl; // Output date

  
  if (date.isValidDate()){
  	cout << "The date is valid." << std::endl;
  }
     
  else{
  	cout << "The date is invalid." << std::endl;
  }
     


}

