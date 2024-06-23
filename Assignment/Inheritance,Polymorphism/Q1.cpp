//Q-1. Assume a class cricketer is declared. Declare a derived class batsman 
//from cricketer. Data member of batsman. Total runs, Average runs and 
//best performance. Member functions input data, calculate average 
//runs, Display data. (Single Inheritance) 

#include <iostream>
using namespace std;

class Cricketer {
    private:
        string name;
    public:
        
        inputName() {
            cout << "Enter Cricketer Name: ";
            cin >> name;
        }

        displayName(){
            cout << "Cricketer Name: " << name << endl;
        }
};

class Batsman : public Cricketer {
    private:
        int totalRuns;
        float averageRuns;
        int bestPerformance;
    public:
        
        inputDetails() {
            int innings;
            cout << "Enter Total Runs: ";
            cin >> totalRuns;
            cout << "Enter Best Performance: ";
            cin >> bestPerformance;
            cout << "Enter Number of Innings Played: ";
            cin >> innings;

            if (innings != 0) {
                averageRuns = totalRuns / innings;
            } else {
                averageRuns = 0;
            }
        }

        
        displayData(){
            displayName();
            cout << "Total Runs: " << totalRuns << endl;
            cout << "Average Runs: " << averageRuns << endl;
            cout << "Best Performance: " << bestPerformance << endl;
        }
};

main() {
    Batsman bm;
    bm.inputName();
    bm.inputDetails();
	bm.displayData();
    
}
