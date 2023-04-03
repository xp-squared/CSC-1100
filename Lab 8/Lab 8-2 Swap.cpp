/******************************************************************************

Zane Christe Lab 8-2 
Description:
Write a program to swap the 1st integer element of an array with the last.
Program takes in user input to populate array

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
    int elements = 0;
    cout << "Enter number of elements you want to enter: ";
    cin >> elements;
    
    int eleArray[elements] = {};
    
    for (int i = 0; i < elements; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> eleArray[i];
    }

    int size = sizeof(eleArray)/sizeof(elements);
    
    int z1, z2, temp;
    z1 = eleArray[0]; 
    z2 = eleArray[size-1]; 
    temp = z1; // 1
    eleArray[0] = z2;
    eleArray[size-1] = temp; 
    
    cout << "Array after swapping!" << endl;
    for (int i = 0; i < elements; i++) {
        cout << eleArray[i] << " ";
    }
    
    
    return 0;
}