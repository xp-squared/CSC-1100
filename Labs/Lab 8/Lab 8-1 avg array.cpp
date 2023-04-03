/******************************************************************************

Lab 8-1 Zane Christe 3/7/23
sum and average of array elements
Write a program to find the sum and average of an integer array.
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
    cout << "Enter elements in ascending order" << endl;
    
    int eleArray[elements] = {};
    
    for (int i = 0; i < elements; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> eleArray[i];
    }
    
    int sum = 0;
    
    for (int z = 0; z < elements; z++) {
        sum = sum + eleArray[z];
    }
    
    int average = sum/elements;
    
    cout << "\nThe sum of the Array is: " << sum << endl;
    cout << "The average of the Array is: " << average << endl;
    
    return 0;
}

