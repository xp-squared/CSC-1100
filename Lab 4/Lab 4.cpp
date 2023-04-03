/******************************************************************************

Lab 4-1
Zane Christe

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const float CENTIMETERS_PER_INCH = 2.54;
const float INCHES_PER_FOOT = 12;

int main()
{

    
    int feet, inches;
    int totalInches;
    float centimeter;
    
    cout << "Enter two integers, one for feet and one for inches: ";
    cin >> feet;
    cin >> inches;
    
    cout << "\nThe numbers you entered are " << feet << " for feet and " << inches << " for inches." << endl;
    
    totalInches = INCHES_PER_FOOT * feet + inches;
    cout << "The total number of inches = " << totalInches << endl;
    
    centimeter = CENTIMETERS_PER_INCH * totalInches;
    cout << "The number of centimeters = " << centimeter << endl;


    return 0;
}
