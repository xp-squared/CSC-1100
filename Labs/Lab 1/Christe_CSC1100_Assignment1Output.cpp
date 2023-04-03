/******************************************************************************
Zane Christe
LAB 1 1/17/23
Assignment 1 Output Manipulation 
*******************************************************************************/
#include <iostream>
#include <iostream> // contains cout, cin
#include <iomanip> // lets u manip output 
#include <string> // library for strings 

using namespace std;

int main()
{
    cout << setw(15) << left << "Subject" << right << "Marks\n"; 
    cout << setw(18) << left << "Mathematics" << right << "90\n";
    cout << setw(18) << left << "Computer" << right << "77\n";
    cout << setw(18) << left << "Chemistry" << right << "69";
    



    return 0;
}