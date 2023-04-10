/*==========================================================

 Title:     Assignment 12 - C++ Wizard Creature Department
 Course:  	CSC 1100
 Author:  	<Zane Christe>
 Date:    	<4/4/23>
 Description: This program shows how parent and child classes work
 and how we can assign variables from each level of class

 ==========================================================
*/

#include <iostream>

using namespace std;

class Creature {
    public:
    string name;
    int quantity; 
    string creaturetype = "unkown";
    
   Creature() {
   }
   
   Creature(string n, int q){
       name = n;
       quantity = q;
       creaturetype = "creatures";
   }
   
   void setName(string n) {
       name = n;
   }
   
   string getName() {
       return name;
   }
   
   void setQuantity(int q) {
       quantity = q;
   }
   
   int getQuantity() {
       return quantity;
   }
   
   void printStatement() {
       cout << "There's " << quantity << " " << creaturetype << " named " << name << endl;
   }
};


class Phoenix: public Creature {
    public:
    string color;
    string creaturetype = "phoenixes";
    void setColor(string c) {
        color = c;
    }
    string getColor(){
        return color;
    }
    void printStatement() {
        cout << "There's " << quantity << " " << color << " " << creaturetype << " named " << name << endl;
    }
};

class Basilisk: public Creature {
    public:
    string creaturetype = "basilisk";
    int quantity = 1;
    void printStatement() {
        cout << "There's " << quantity << " " << creaturetype << " named " << name << endl;
    }
};



int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];

	// Write loop here to record user input as names
	for (int i = 0; i < 2; i++) {
        string name;
        cin >> name; 
        nameArr[i] = name;
	}
    // and set third name to “Clover”
    nameArr[2] = "Clover";

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    
}

