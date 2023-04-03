/*==========================================================

 Title:       Assignment4 - Hypotenuse
 Course:      CSC 1100
 Author:      Zane Christe
 Date:        1/26/23
 Description: This program details building a triangular box, we use the hypotnuse formula

 ==========================================================
*/
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std; 

int main() {

    float one,two; // initialize variable 
    float h;
    
    cin >> one; 
    cin >> two;
    
    if (one == two) {
       cout << true << "\n" << false << "\n" << false;
    }
    
    else if (one < two) {
        cout << false << "\n" << true << "\n" << false;
    }
    
    else { // one > two
        cout << false << "\n" << false << "\n" << true; 
    }
    
    h = sqrt((one*one)+(two*two));
    h = round(h);
    cout << "\nThe hypotenuse of the triangle is " << h;
    
  //write your solution here and include comments to explain your solution
                   
  return 0;
}

