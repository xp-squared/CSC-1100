/******************************************************************************

Lab 6-1 Zane Christe

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    char userInput; 
    cout << "Enter any character: ";
    cin >> userInput;
    
    // int(userInput) makes anything a whole number, or number, gives us the ascii value 
    
    if(int(userInput) >= 65 && int(userInput) <= 90) {
        cout << "Character is a capital letter";
    }
    
    else if(int(userInput) >= 97 && int(userInput) <= 122){
        cout << "Character is a small letter";
    }
    
    else if(int(userInput) >= 48 && int(userInput) <= 57){
        cout << "Character is a digit";
    }
    
    else {
        cout << "Character is a special symbol"; 
    }

    return 0;
}
