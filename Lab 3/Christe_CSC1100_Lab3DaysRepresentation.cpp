/******************************************************************************

Zane Christe
Days Representation
Lab assignment 3-1
1/31/23

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int uDays,days,years,months;
    cout << "Enter no. of days: ";
    cin >> uDays; 
    
    years = uDays / 365;
    months = (uDays - (years*365)) / 30;
    days = (uDays - ((years*365)+(months*30)));
    
    cout << "Years: " << years; 
    cout << "\nMonths: " << months;
    cout << "\nDays: " << days;

    return 0;
}

