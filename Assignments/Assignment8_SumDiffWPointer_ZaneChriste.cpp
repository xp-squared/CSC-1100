/*==========================================================

 Title:       Assignment 8 - Sum/Difference with Pointer
 Course:      CSC 1100
 Author:      <Zane Christe >
 Date:        <2/21 /23 >
 Description: This program ....

 ==========================================================
*/
#include <iostream>
#include <cmath>

using namespace std; 

void Modify(int *x, int *y) { // function takes what is pointed to at x and y and modifies it
    int z = 0; // created z so we dont add the new *x when solving for *y
    z = *x + z; 
    *x = *x + *y;
    *y = abs(z - *y); // used abs val to make sure output is always positive 
    
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x; // creates pointer from address of var x
    int *ptr_y = &y; // creates pointer from address of var y
    
    cin >> x; 
    cin >> y;
    
    Modify(ptr_x, ptr_y); // sends the pointer vars to the function
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}


// so in this program the address is stored in the pointer variables of ptr_x and ptr_y
// we send the pointer which is a var that holds the address of another var thru the function
// the addresses are then overwritten by the pointer variables when conducting the math