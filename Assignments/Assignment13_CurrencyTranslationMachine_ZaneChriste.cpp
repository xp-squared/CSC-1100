/*==========================================================

 Title:     Assignment 13 (Final) - C++ Currency Translation Machine
 Course:  	CSC 1100
 Author:  	Zane Christe
 Date:    	4/8/23
 Description: This program 

 ==========================================================
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
// Define necessary directives

// create your classes here
class ctm {
    public:
    // contains all variables that will be used in all child classes
    float yuan = 6.77;
    float euro = 0.98;
    float pounds = 0.83; 
    float CurToExchange;
    float input; 
    float RateToUse;
    float conversion = 0.05;
    string currencytype; 
    void intro() {  // /PAY ATTENTION TO FUNC TYPE
        cin >> input;
        while (input < 1 || input > 3 ) {
            cout << "Invalid entry, Please enter a number between 1-3: ";
            cin >> input;
        }
        if (input == 1) {
            RateToUse = yuan;
            currencytype = "Yuan";
        }
        
        else if (input == 2) {
            RateToUse = euro;
            currencytype = "Euro";
        }
        
        else {
            RateToUse = pounds;
            currencytype = "Pounds";
        }
    }
};

class amount: public ctm {
    public:
    void calculations() { // PAY ATTENTION TO FUNCTION TYPE
        cin >> CurToExchange;
        cout << fixed << setprecision(2) << CurToExchange << " " << currencytype << endl;
        cout << fixed << setprecision(2) << CurToExchange/RateToUse << " dollars" << endl;
        cout << fixed << setprecision(2) << (CurToExchange/RateToUse)*conversion << " dollars" << endl;
        cout << fixed << setprecision(2) << (CurToExchange/RateToUse) + ((CurToExchange/RateToUse)*conversion) << " dollars" << endl;
    }
};

class rc: public amount {
    public:
    void rctype() { // PAY ATTENTION TO FUNCTION TYPE
        ofstream export1("receipt.txt");
        export1 << fixed << setprecision(2) << CurToExchange << " " << currencytype << endl;
        export1 << fixed << setprecision(2) << CurToExchange/RateToUse << " dollars" << endl;
        export1 << fixed << setprecision(2) << (CurToExchange/RateToUse)*conversion << " dollars" << endl;
        export1 << fixed << setprecision(2) << (CurToExchange/RateToUse) + ((CurToExchange/RateToUse)*conversion) << " dollars" << endl;
        export1.close();
    }
};

int main()
{
    //No need to modify main as everything should be handled in the classes
    rc obj; 
    obj.ctm::intro();
    obj.amount::calculations();
    obj.rctype();
    
    return 0;
}

