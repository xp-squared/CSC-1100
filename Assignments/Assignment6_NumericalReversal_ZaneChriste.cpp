/*==========================================================

 Title:       Assignment 6 - Numerical Reversal
 Course:      CSC 1100
 Author:      Zane Christe
 Date:        < 2/5 /23 >
 Description: This program reverse the numbers entered from the keyboard by using arrays

 ==========================================================
*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    
    int arraySize;
    cin >> arraySize; 
    string array1[arraySize] = {};
    
    for(int i = 0; i < arraySize; i++){
        cin >> array1[i];
    }
    
    cout << endl;
    
    for(int z = arraySize; z >= 0; z--){
        cout << array1[z] << " ";
    }
                   
  return 0;
}

