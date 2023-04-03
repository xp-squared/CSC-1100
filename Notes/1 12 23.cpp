/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> // includes input output related functions
#include <iostream> // contains function like cout, cin. #include tell preprocessor to include these files in the code
#include <iomanip> // manipulates output of c++ 
#include <fstream> // create files, write info to files, read info from files

using namespace std; // lets us not have to use std:: before certain pieces of code

int sum(int x, int y) {
    int age_12 = x + y;
    return age_12;
}

int main()
{
    printf("1/12/23 notes!!!");  //print f method 
    printf("\n\n"); // new line operator
    std::cout << "This uses std::cout method \n";  // if using namespace std; is not included you use this method. Apparently more efficient this way
    cout << "This uses cout when using namespace std is there\n\n";
    int myNum = 15; // declaring variable
    cout << myNum;
    
    printf("\n\n");
    int x = 15; // declaring variable
    cout << &x; // reference of variable in memory ?
    
    printf("\n\n");
    int age_12 = 15; // cant start var with numbers 
    int age1 = 4;
    cout << "I am " << age_12 + age1 << " years old.";
    // plus symbol is addition and used for concatenation
    // int x = 5, y = 6, z = 50
    // cout << x + y + z
    cout << "\n\nI am " << sum(age_12, age1) << " years old."; // using function to add age

    // user input
    printf("\n\n");
    int z = 0; // initialize var so we can set it with user input
    cout << "Enter a number: ";
    cin >> z;
    printf("\nYour number is: ");
    cout << z;
    
    // creating a simple calculator
    
    int x1 = 0, y1 = 0;
    int sum1 = 0;
    cout << "\n\nCalculator\nType a number: ";
    cin >> x1;
    cout << "Type another number: ";
    cin >> y1; 
    sum1 = x1 + y1;
    cout << "Sum is: " << sum1;
    
    // age example
    int age5 = 0;
    int age6 = 0;
    cout << "\n\nEnter number for age 5: ";
    cin >> age5;
    cout << "\nEnter number for age 6: ";
    cin >> age6;
    cout << "\nJane is " << sum(age5,age6) << " years old";
    
    
    return 0;
}


// C++ output, variables, identifiers, user input
// CPP TURBOC lets you do animations and other cool stuff 
// basics of cs: input and output
// cout object with << operator is used to output values/print text
// cout does not insert new line at end of output

// variables
// int stores integers whole numbers without decimals 123, -123
// float* floaoting point number with decimals as 19.99
// double* stores floating point numbers
// char stores single characters such as 'a'
// string stores text, "hello world"
// bool stores values with two states: true or false

// DECLARING VARIABLES
// syntax: type variable = value;
// example: int myNum = 15;
// cout << myNum;

// Pointers set cpp Appart from other languages
// most dont like pointers, they can manipulate memory and are messy

// general rules for identifiers
// names can contain letters digits and underscores
// CONTINUE This

//CONSTANTS 
// use constants to make sure that variables are not changed 
// const float PI = 3.14; 

// DONT USE PROMPT STATEMENTS WITH ONLINE GDB, DOESNOT UNDERSTAND

