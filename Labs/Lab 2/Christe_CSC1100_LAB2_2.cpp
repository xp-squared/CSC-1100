/******************************************************************************

Zane Christe
1/24/2023
Lab 2-2


*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

using namespace std; 

int main()
{
    int x,y,z;
    cout << "Enter two numbers: "; // can enter numbers like this in input on sameline "1 2" and will work!!!!
    cin >> x;
    cin >> y;
    z = x;
    x = y;
    y = z; 
    cout << "After swapping, numbers are " << x << " and " << y; 
    

    

    return 0;
}


