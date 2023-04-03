/******************************************************************************

Lab 3-2
Zane Christe
Money Representation
1/31/23

*******************************************************************************/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int amount, hundred, fifty, twenty, ten, five, one;
    cout << "Enter amount: ";
    cin >> amount;
    
    hundred = amount / 100;
    fifty = (amount % 100) / 50;
    twenty = ((amount % 100) % 50) / 20;
    ten = (((amount % 100) % 50) % 20) / 10;
    five = ((((amount % 100) % 50) % 20) % 10) / 5;
    one = (((((amount % 100) % 50) % 20) % 10) % 5) / 1;
    
    
    cout << "\n$100 : " << hundred;
    cout << "\n$ 50 : " << fifty;
    cout << "\n$ 20 : " << twenty;
    cout << "\n$ 10 : " << ten;
    cout << "\n$  5 : " << five;
    cout << "\n$  1 : " << one;
    return 0;
}

