/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> // brings input output related functions
#include <iostream> // contains cout, cin
#include <iomanip> // lets u manip output 
#include <string> // string library

using namespace std; // lets us not have to use std infront of code

int main()
{
    std::cout << "Hello World\n\n";
    cout << "Without the std:: because of USING NAMESPACE STD\n\n";
    int exInt = 5; // integer datatype, whole numbers
    float exFloat = 5.55; // floating point number
    double exDouble = 5.99; // floating point number 
    char myLetter = 'D'; // character
    bool myBoolean = true; // myBool
    string myText = "Hello"; // string 
    
    
    double flt_val = 3.141321362;
    cout << flt_val << "\n\n"; //automatically rounds it, set precision lets you mess with how long it is
    cout << setprecision(4) << flt_val << setw(25) << "When set to 4\n";
    cout << setprecision(9) << flt_val << setw(21) << "When set to 9\n\n"; 
    // set precision, 4 values and 9 values 
    // set width aligns the output 
    cout << setw(10) << 77 << endl; // 10 char including 77
    cout << setfill('#') << setw(10) << 15 << endl; // put 10 pound signs, but last 2 put the number 15
    
    // iomanip lets you manipulate output, so it looks nice for the user. 
    // float is six or seven decimal places
    // double variables have precision of about 15 digits
    // floating point numbers can be scientific numbers 
    
    // CPP divides operators into grouops
    // Arithmetic operators
    // Assignment operators
    // Comparison operators
    // Logical operators
    // bitwise operators
    
    // + - * / and the few ahead are arithmetic ops
    // % modulus operator x%y returns the division remainder
    // ++ increment operator
    // -- decrement operator 
    
    // assignment operators
    // =
    // +=      x+=3     x = x + 3
    // |=
    // ^=
    
    // comparison operators
    // <= < > >= == !=
    cout << (5<6); // gives us 1 which means true, 1 = true
    int x1 = 5;
    int y1 = 6;
    cout<< "\n\n" << (x1>y1) << "\n\n"; // gives 0 since 5 is not great than 6, false = 0
    
    // concatenation
    string first = "John";
    string last = "Doe";
    cout << first + " " + last << "\n\n";
    
    // append 
    string first1 = "Zane";
    first1.append(" "); // creates space between my name
    string last1 = "Christe";
    string fullname = first1.append(last1);
    cout << fullname;
    cout << "\n" << fullname.length(); // returns length of my name but includes space 
    cout << "\nIndex 1 of Zane Christe is : " << fullname[1];
    
    // change string characters
    string nameExample = "John";
    cout << "\n\n" << nameExample; // changes index of his letter in next line
    nameExample[3] = 'z';
    cout << "\n" << nameExample << "\n\n"; 
    
    // OUTPUT!
    cout << "Enter your first name: ";
    string firstname2; // creates variables
    cin >> firstname2;
    cout << firstname2; 
    // do not include these kind of statements in online gdb, it is a machine and wont understand
    
    
    string fullName3;
    cout << "\n\nType your full name: ";
    getline (cin, fullName3);
    cout << "\nYour name is: " << fullName3;
    
    
    // BMI CALC
    double height, weight, bmi; 
    cout << "\n\nBMI CALCULATOR\n";
    cout << "Type in your height()m: ";
    cin >> height;
    cout << "Type in weight(kg): ";
    cin >> weight; 
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi; 
    
    // TEMP CONVERSION EXAMPLE
    cout << "TEMP conversion example"
    cout << "\n\nEnter the temperature in fahrenheight: ";
    double tempf, tempc; 
    cin >> tempf;
    tempc = (tempf - 32)/1.8; // always use pemdas rules
    cout << "The temp is " << tempc << " degrees celsius.\n"; 
    
    
    return 0;
}









