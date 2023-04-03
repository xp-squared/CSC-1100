/******************************************************************************

Zane Christe
2/28/23
Lab 7-1

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int num, pos, neg, zeros = 0;
    string cont = "y"; 
    
    while (cont == "y") {
        cout << "Enter a number: ";
        cin >> num; 
        
        if (num > 0) {
            pos = pos + 1;
        }
        
        else if (num < 0) {
            neg = neg + 1;
        }
        
        else {
            zeros = zeros + 1;
        }
        
        cout << "Do you want to continue(y/n)? ";
        cin >> cont; 
    }
    cout << "Positive Number: " << pos << endl;
    cout << "Negative Number: " << neg << endl;
    cout << "Zero Number: " << zeros << endl; 


    return 0;
}

