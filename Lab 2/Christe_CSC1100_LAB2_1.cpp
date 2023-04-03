/******************************************************************************
Zane Christe
1/24/2023
Lab 2-1 

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

int main()
{
    int p,r,t,i;
    cout << "Enter Principal: ";
    cin >> p;
    cout << "Enter Rate: ";
    cin >> r;
    cout << "Enter Time: ";
    cin >> t;
    i=(p*r*t)/100;
    cout << "Simple interest is: " << i;



    return 0;
}

