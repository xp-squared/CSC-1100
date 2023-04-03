/*==========================================================

 Title:       Assignment 11 - Arena Area Inheritance
 Course:      CSC 1100
 Author:      <Zane Christe>
 Date:        <3/28/23>

 ==========================================================
*/

#include <iostream>

using namespace std;

//Create classes Arena and ArenaArea here
class Arena {
    public: 
    int radius; // declared in parent so that we can set it in child classw 
    void display() { // first display method to show just radius squared 
        int rsquared = radius*radius;
        cout << rsquared;
    } 
    
};

class ArenaArea: public Arena {
    public:
    void scan_input() { // takes input from user in child function
        cin >> radius; // set radius in child, just initialize in parent 
    }
    void display() { // second display function that we override the original with 
        cout << radius*radius*3.14;
    }
};

int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}
