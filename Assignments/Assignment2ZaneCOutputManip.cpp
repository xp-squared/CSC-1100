/*==========================================================

 Title:       Assignment2 - Output Manipulation
 Course:      CSC 1100
 Author:      Zane Christe
 Date:        <1 /15 /2023 >
 Description: This program is assignment 2, output manipulation using iomanip

 ==========================================================
*/

#include <iostream>
#include <iomanip> // brings forth the manipulation functions
using namespace std;

int main() {
    cout << setw(10) << left << "ten" << right << "fourfour\n"; // sets width between both outputs
    // we put "ten" on the left side, then create 10 spaces between "ten" and the right and print "fourfour"
    // set the width so we can have 10 spaces between the words 
    cout << setfill ('-') << setw(80); // fills blank space 80 times with the "-" character
    cout << ""; // outputs blank so it can be filled by "-" 80 times
    return 0;
}




