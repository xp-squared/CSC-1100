/*==========================================================

 Title:       Assignment3 - Dragon Years
 Course:      CSC 1100
 Author:      <First & Last Name>
 Date:        < / / >
 Description: This program ....

 ==========================================================
*/
#include <iostream>
#include <iomanip> 
#include <stdio.h>
#include <string>

using namespace std; 

int main() {
    string dname;
    float age;
    float dage;
    //cout << "Enter dragons name: ";
    cin >> dname;
    //cout << "\nEnter dragons age: ";
    cin >> age;
    dage = ((age-2) * 4) + 21;
    cout << "\nThe dragon named " << dname << " is " << dage << " years old in wizard years.";
    
  
                   
  return 0;
}

