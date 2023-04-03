/*==========================================================

 Title:       Assignment 10 - Wizard Identification using Classes
 Course:      CSC 1100
 Author:      <First & Last Name>
 Date:        < / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>

using namespace std;

//Create your class Wizard here.
class Wizard { // the wizard class I created 
  private: // private access so cannot be directly gathered
    int age; 
    string firstname; 
    string lastname; 
    int id; 
    
  public: // create public specifier 
  
  void set_wizardAge(int a) { 
    // create methods so that when one enters there info
    // it is taken and put as a new variable and then set to the variable in private 
      age = a;
  }
  
  int get_wizardAge() {
      // when the get function is called we can now retrieve the private info
      // make sure function is specified for what type 
      return age;
  }
  
  void set_wizard_ID(int temp) {
      id = temp;
  }
  
  int get_wizard_ID() {
      return id; 
  }
  
  void set_wizardFirstName(string fn) {
      firstname = fn;
  }
  
  string get_wizardFirstName() {
      return firstname; 
  }
  
  void set_wizardLastName(string ln) {
      lastname = ln;
  }
  
  string get_wizardLastName() {
      return lastname;
  }
    
}; 

int main() {
//DO NOT MODIFY THE MAIN()!!!!
    int wizardAge, wizard_ID;
    string wizardFirstName, wizardLastName;
    
    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID;
    
    Wizard wiz;
    wiz.set_wizardAge(wizardAge);
    wiz.set_wizard_ID(wizard_ID);
    wiz.set_wizardFirstName(wizardFirstName);
    wiz.set_wizardLastName(wizardLastName);
    
    cout << wiz.get_wizardAge() << "\n";
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n";
    cout << wiz.get_wizard_ID();
    
    return 0;
}
